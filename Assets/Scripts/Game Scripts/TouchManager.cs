using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TouchManager : MonoBehaviour
{

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
            if (touch.phase == TouchPhase.Began) // if they've STARTED touching the screen (therefore a press)...
            {

                Vector2 pos = touch.position; // the position on the screen they've touched

                Ray raycast = Camera.main.ScreenPointToRay(pos); // warm up the raycast
                RaycastHit raycastHit;
                if (Physics.Raycast(raycast, out raycastHit)) // shoot the thing and whatever it hits, put in the raycastHit varaible
                {

                    if (raycastHit.collider.CompareTag("Tile")) // if it hit a tile..
                    {
                        Vibration.VibratePop(); // vibrate the phone slightly
                        raycastHit.collider.GetComponent<TileMove>().TilePressed(); // tell the tile that it's been pressed!
                    }
                }


                

            }
        }

    }

}
