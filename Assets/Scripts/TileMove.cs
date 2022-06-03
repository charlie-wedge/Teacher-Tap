using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TileMove : MonoBehaviour
{
    private float timeAtStart;
    private int mySpeed = LevelManager.speed; // ensures the speed stays contant throughout the life of this tile, regardless if speed changes in the LevelManager script.
    private float zoneZPos = -8.12f; // -8.12 is the z posiiton of the zone

    private bool inZone = false;

    // Start is called before the first frame update
    void Start()
    {
        timeAtStart = Time.timeSinceLevelLoad;
    }

    // Update is called once per frame
    void Update()
    {
        transform.position = new Vector3(transform.position.x, transform.position.y, transform.position.z + mySpeed * Time.deltaTime * -1);
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Zone"))
        {
            inZone = true;
           // print("That took " + (Time.timeSinceLevelLoad - timeAtStart) + " seconds!");
        }
    }
    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("Zone"))
        {
            inZone = false;
            //print("Missed a tile!");
        }
    }

    public void TilePressed() // we've been pressed!
    {
        int res = -1;

        if (inZone)
        {
            float zPos = transform.position.z;
            float tileOffsetWithZone = Mathf.Abs(zPos - zoneZPos);

            if (tileOffsetWithZone < 0.15f)
            {
                res = 3; // perfect
                print("Perfect!");
            }
            else
            {
                res = 2; // half half
                print("Good");
            }

        }
        else
        {
            res = 1; // complete miss (not in zone at all)
            print("Bad");
        }

        transform.parent.GetComponent<Score>().ChangeScore(res);


        Destroy(gameObject, 0f);

        /*
         * 0 = missed
         * 1 = bad
         * 2 = good
         * 3 = perfect
        */

        //ChangeScore(offset);
        
    }

    /*
    private void ChangeScore(int num)
    {
        float scoreChange = 0;

        switch (num)
        {
            case 0: // complete miss (not in zone at all)
                scoreChange = -0.5f;
                break;
            case 1: // half in zone, half not
                scoreChange = 0.5f;
                break;
            case 2: // perfect (completly in zone)
                scoreChange = 1f;
                break;
            case 3: // forgot (didn't tap tile at all)
                scoreChange = -1f;
                break;
            default:
                Debug.LogWarning("num not recognised - not changing score");
                break;

        }

        Score.ChangeScore(scoreChange);

        Destroy(gameObject, 0f);
    }
    */
}
