using UnityEngine;

// script mainly used for events on animation components (ghost tile). It destroys itself

public class Destroy : MonoBehaviour
{
    public void DestroyObject() // public because it is called from external sources (animations etc)
    {
        Destroy(gameObject, 1f);
    }
}
