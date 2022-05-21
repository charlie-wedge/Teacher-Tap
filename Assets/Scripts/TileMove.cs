using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TileMove : MonoBehaviour
{
    private float timeAtStart;
    private int mySpeed = LevelManager.speed; // ensures the speed stays contant throughout the life of this tile, regardless if speed changes in the LevelManager script.

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
           // print("That took " + (Time.timeSinceLevelLoad - timeAtStart) + " seconds!");
            Destroy(gameObject, 5f);
        }
    }

    public void TilePressed() // we've been pressed!
    {
        Destroy(gameObject, 0f);
    }
}
