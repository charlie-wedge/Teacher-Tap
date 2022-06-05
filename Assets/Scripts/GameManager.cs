using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{

    public LevelManager levelManager;

    public GameObject ghostTileReference;
    public GameObject[] rowHighlightsReference;

    public static GameObject ghostTile;
    public static GameObject[] rowHighlights;


    // Start is called before the first frame update
    void Start()
    {
        ghostTile = ghostTileReference;
        rowHighlights = rowHighlightsReference;

        levelManager.newLevelName = "crush";
        Invoke("StartLevel", 0.1f);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void StartLevel()
    {
        levelManager.StartLevel();      
    }
}
