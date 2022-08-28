using UnityEngine;

// This script calls complex functions for animation components, since animation components can only call simple functions

public class AnimationEvents : MonoBehaviour
{
    // These three arrays are public because they are set in the Unity Editor:
    public GameObject[] destroyObjects;
    public GameObject[] enableObjects;
    public GameObject[] disableObjects;

    public void DestroyObjects() // destory all objects in the destroyObjects[] array
    {
        foreach (GameObject obj in destroyObjects)
        {
            Destroy(obj);
        }
    }
    public void EnableObjects() // enable all objects in the enableObjects[] array
    {
        foreach (GameObject obj in enableObjects)
        {
            obj.SetActive(true);
        }
    }
    public void DisableObjects() // disable all objects in the disableObjects[] array
    {
        foreach (GameObject obj in disableObjects)
        {
            obj.SetActive(false);
        }
    }
}