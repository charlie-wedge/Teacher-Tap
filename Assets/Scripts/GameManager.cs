using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{

    public LevelManager levelManager;

    // Start is called before the first frame update
    void Start()
    {
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
