using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

// The GameManager is the middle man between scenes - it helps other scripts to talk with each other, and manages a few buttons on the "Level Complete" screen.

public class GameManager : MonoBehaviour
{

    public LevelManager levelManager;
    public SceneLoader sceneLoader;

    public GameObject ghostTileReference;
    public GameObject[] rowHighlightsReference;

    public static GameObject ghostTile;
    public static GameObject[] rowHighlights;

    public Animation[] levelCompleteExitAnimations;
    public string[] levelCompleteExitAnimationNames;


    // Start is called before the first frame update
    void Start()
    {
        ghostTile = ghostTileReference;
        rowHighlights = rowHighlightsReference; 
    }

    private int newBuildIndex;
    public void PlayAgainButtonPressed() // from the end screen button
    {
        ExitLevelCompleteScreen();
        newBuildIndex = 1;
        Invoke(nameof(ChangeScene), 1.1f);
    }
    public void ContinueButtonPressed() // from the end screen button
    {
        ExitLevelCompleteScreen();
        newBuildIndex = 0;
        Invoke(nameof(ChangeScene), 1.1f);
    }
    private void ChangeScene() // invoked from above
    {
        sceneLoader.LoadScene(newBuildIndex);
    }

    public void ExitLevelCompleteScreen() // called from both the "Continue" and "Play Again" buttons on the level complete screen
    {
        for (int i=0; i<levelCompleteExitAnimations.Length; i++) // play all the appropriate animations
        {
            levelCompleteExitAnimations[i].Play(levelCompleteExitAnimationNames[i]);
        }
    }
}
