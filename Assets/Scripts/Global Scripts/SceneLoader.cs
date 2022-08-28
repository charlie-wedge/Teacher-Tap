using UnityEngine;
using UnityEngine.SceneManagement;

// A simple script which allows other scripts and animation components to change the scene to a passed on buildIndex

public class SceneLoader : MonoBehaviour
{
    public void LoadScene(int buildIndex) // load a scene based on the buildIndex
    {
        print("Loading Scene: " + SceneManager.GetSceneByBuildIndex(buildIndex).name + " (build index " + buildIndex + ")");
        SceneManager.LoadScene(buildIndex);
    }
}
