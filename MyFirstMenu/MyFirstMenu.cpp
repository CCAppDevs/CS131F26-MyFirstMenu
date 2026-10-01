#include <iostream>

using namespace std;

int main()
{
    // interface: (main menu)

    /*
    This project aims to calculate the area of a space using a menu

    types of loops:
    while loop (while true, do the thing)
    do while loop (do a thing. then check a condition, if its true loop and check again)
    */

    int width = 0;
    int length = 0;
    int result = 0;
    int choice = -1;
    bool isRunning = true;

    while (isRunning)
    {
        cout << "----------------------------\n";
        cout << "Main Menu\n";
        cout << "----------------------------\n";
        cout << "1. Input Width\n";
        cout << "2. Input Length\n";
        cout << "5. Calculate\n";
        cout << "0. Exit\n";
        cout << "\n";
        cout << "What would you like to do ? (0 - 5) ";
        
        cin >> choice;

        switch (choice)
        {
        case 1:
            // set the width
            break;
        case 2:
            // set the length
            break;
        case 5:
            // calculate
            break;
        case 0:
            cout << "Exiting...\n";
            isRunning = false;
            break;
        default:
            cout << "Incorrect choice. Please try again.\n";
            break;
        }
    }

}
