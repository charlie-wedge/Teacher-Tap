using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TouchManager : MonoBehaviour
{

    // Start is called before the first frame update
    void Start()
    {
        Vibration.Init();
    }

    // Update is called once per frame
    void Update()
    {
        foreach (Touch touch in Input.touches)
        {
            if (touch.phase == TouchPhase.Began)
            {

                Vector2 pos = touch.position;

                Ray raycast = Camera.main.ScreenPointToRay(pos);
                RaycastHit raycastHit;
                if (Physics.Raycast(raycast, out raycastHit))
                {

                    if (raycastHit.collider.CompareTag("Tile"))
                    {
                        Vibration.VibratePop();
                        raycastHit.collider.GetComponent<TileMove>().TilePressed();
                    }
                }


                

            }
        }

    }

}
