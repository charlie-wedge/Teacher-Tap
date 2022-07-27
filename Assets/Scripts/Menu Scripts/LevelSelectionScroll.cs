using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelSelectionScroll : MonoBehaviour
{
    public RectTransform scrollableObject;

    public MenuManager menuManager;

    private bool mouseDown = false;
    [HideInInspector]
    public bool moved = false; // used by the Menu Manager to help decide if it's a touch or a scroll
    private Vector2 previousMousePosY;
    private Vector2 totalOffset; // the total offset while this finger has been on the screen

    public int swipeSensitivity = 200; // public so we can edit the value in the Unity Editor

    // Update is called once per frame
    void Update()
    {
        if (Input.GetMouseButtonDown(0)) // the user is pushing down on the screen
        {
            mouseDown = true;
            previousMousePosY = GetPos();
            totalOffset = Vector2.zero; // reset
        }
        else if (Input.GetMouseButtonUp(0)) // the user has released their finger off the screen
        {
            mouseDown = moved = false; // reset both booleans back to false
        }

        if (mouseDown)
        {
            Vector2 pos = GetPos(); // get the new position
            Vector2 offset = pos - previousMousePosY; // find the difference (to scroll)
            totalOffset += offset;
            if (menuManager.inMainMenu) // is in the main menu
            {
                if (totalOffset.x < -swipeSensitivity) // swiping from Main Menu to Song Selection menu
                {
                    menuManager.AllSongsButtonPressed();
                    mouseDown = false;
                }
            }
            else // is in the level selection menu
            {
                if (totalOffset.x > swipeSensitivity && !moved) // swiping from Song Selection menu to Main Menu
                {
                    menuManager.ToMainMenu();
                    mouseDown = false;
                }
                else if (offset.y != 0) // scrolling up and down in the Song Selection menu
                {
                    moved = true;
                    previousMousePosY = pos; // set the previous position as the current position

                    scrollableObject.position = new Vector3(scrollableObject.position.x, scrollableObject.position.y + offset.y, scrollableObject.position.z);
                }
            }
            print(totalOffset.x);




        }
    }

    private Vector2 GetPos()
    {
        return Input.mousePosition;
    }
     
    public void NewSongSelected() // called from the song object children
    {
        menuManager.NewSongSelected();
    }
}
