using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

// This script manages the touch when playing. It calls a function on the TileMove script when that tile is pressed, which causes the score to change

public class TouchManager : MonoBehaviour
{

    public LevelManager levelManagerScript;

    // Start is called before the first frame update
    void Start()
    {
        Vibration.Init(); // sets up vibration. This requires some packages to be installed, which can be found here: https://github.com/BenoitFreslon/Vibration
    }

    // Update is called once per frame
    void Update() // check if the screen is being touched for every frame
    {
        foreach (Touch touch in Input.touches) // for every finger touching the screen...
        {

            Vector2 pos = touch.position; // the position on the screen they've touched

            Ray raycast = Camera.main.ScreenPointToRay(pos); // warm up the raycast
            RaycastHit raycastHit;
            if (Physics.Raycast(raycast, out raycastHit)) // shoot the thing and whatever it hits, put in the raycastHit varaible
            {
                string tag = raycastHit.collider.tag;
                TouchPhase touchType = touch.phase;

                if (tag == "Tile") // if it hit a tile..
                {
                    if (touchType == TouchPhase.Began) // if they've STARTED touching the screen (therefore a press)...
                    {
                        Vibration.VibratePop(); // vibrate the phone slightly
                        raycastHit.collider.GetComponent<TileMove>().TilePressed(); // tell the tile that it's been pressed!
                    }
                    else if (touchType == TouchPhase.Ended)
                    {
                        //raycastHit.collider.GetComponent<TileMove>().TileReleased();
                    }
                }
                else if (tag == "Beginning Tile") // the two tiles at the start of the game which are required to be held down to start..
                {
                    if (touchType == TouchPhase.Began) // tell the LevelManager one of them is being held down
                    {
                        raycastHit.collider.GetComponent<Animation>().Play("Beginning Tile Held Down");
                        levelManagerScript.BeginningTilePressed(true);
                    }
                    else if (touchType == TouchPhase.Ended) // tell the LevelManager one of them is no-longer being held down
                    {
                        raycastHit.collider.GetComponent<Animation>().Play("Beginning Tiles Flash");
                        levelManagerScript.BeginningTilePressed(false);
                    }
                }
            }





        }

    }

}
