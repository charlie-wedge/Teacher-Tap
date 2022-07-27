using UnityEngine;

public class AnimationEvents : MonoBehaviour
{
    public GameObject[] destroyObjects;
    public GameObject[] enableObjects;
    public GameObject[] disableObjects;

    public void DestroyObjects()
    {
        foreach (GameObject obj in destroyObjects)
        {
            Destroy(obj);
        }
    }
    public void EnableObjects()
    {
        foreach (GameObject obj in enableObjects)
        {
            obj.SetActive(true);
        }
    }
    public void DisableObjects()
    {
        foreach (GameObject obj in disableObjects)
        {
            obj.SetActive(false);
        }
    }
}