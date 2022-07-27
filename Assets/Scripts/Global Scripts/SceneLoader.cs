using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneLoader : MonoBehaviour
{
    public void LoadScene(int buildIndex)
    {
        print("Loading Scene: " + SceneManager.GetSceneByBuildIndex(buildIndex).name + " (build index " + buildIndex + ")");
        SceneManager.LoadScene(buildIndex);
    }
}
