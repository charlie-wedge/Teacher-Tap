using UnityEngine;

// script mainly used for events on animation components (ghost tile)

public class Destroy : MonoBehaviour
{
    public void DestroyObject()
    {
        Destroy(gameObject, 1f);
    }
}
