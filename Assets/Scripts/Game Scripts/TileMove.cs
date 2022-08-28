using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// This script is found on every tile. It moves the tile in a single direction based on the speed (stage). It also calculates the distance when pressed, to tell the score script how close they were to the 'sweet spot'

public class TileMove : MonoBehaviour
{
    private float timeAtStart;
    public int myRow;
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

    private void OnTriggerEnter(Collider other) // we have entered the 'sweet spot'
    {
        if (other.CompareTag("Zone"))
        {
            inZone = true;
           // print("That took " + (Time.timeSinceLevelLoad - timeAtStart) + " seconds!");
        }
    }
    private void OnTriggerExit(Collider other) // we have left the 'sweet spot'
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
            float tileOffsetWithZone = Mathf.Abs(zPos - zoneZPos); // the absolute distance from us and the 'sweet spot'

            if (tileOffsetWithZone < 0.15f) // if we're within 0.15f from the 'sweet spot', count it as a perfect score
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

        Vector3 ghostPos;
        if (res == 3) // if it's a 'perfect' hit
        { 
            ghostPos = new Vector3(transform.position.x, transform.position.y, zoneZPos); // spawn at the zone, which creates a satisfying snapping effect
        }
        else
        {
            ghostPos = transform.position;
        }
        Instantiate(GameManager.ghostTile, ghostPos, transform.rotation, transform.parent);

        GameObject highlightObject = GameManager.rowHighlights[myRow]; // get the correct highlight object (for the row)
        //highlightObject.GetComponent<Renderer>().material.color = GameManager.rowHighlightsColours[res]; // change the colour of the highlight
        highlightObject.transform.position = transform.position;
        highlightObject.GetComponent<Animation>().Play("Row Highlights " + res.ToString());

        Destroy(gameObject, 0f);

        //gameObject.GetComponent<Animation>().Play("Tile Hit");

        //Destroy(gameObject, 0f);

        /*
         * 0 = missed
         * 1 = bad
         * 2 = good
         * 3 = perfect
        */

        //ChangeScore(offset);
        
    }

    public void DestroyTile()
    {
        Destroy(gameObject, 0f);
    }

}

