#include <iostream>

using namespace std;

int main();

void PrintMenu();
int Prompt(string question);
void CaptureWidth();
void CaptureLength();
void Calculate();
void Reset();

int width = 0; // global
int length = 0;
int result = 0;

int main()
{
    // interface: (main menu)

    /*
    This project aims to calculate the area of a space using a menu

    types of loops:
    while loop (while true, do the thing)
    do while loop (do a thing. then check a condition, if its true loop and check again)
    */


    int choice = 0;
    bool isRunning = true;

    while (isRunning)
    {

        PrintMenu();

        cout << "\n";

        choice = Prompt("What would you like to do ? (0 - 5)");

        switch (choice)
        {
        case 1:
            CaptureWidth();
            break;
        case 2:
            CaptureLength();
            break;
        case 5:
            Calculate();
            break;
        case 6:
            // reset the values (telling the user)
            Reset();
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

void PrintMenu()
{
    cout << "----------------------------\n";
    cout << "Main Menu\n";
    cout << "----------------------------\n";
    cout << "1. Input Width\n";
    cout << "2. Input Length\n";
    cout << "5. Calculate\n";
    cout << "6. Reset\n";
    cout << "0. Exit\n";
}

int Prompt(string question)
{
    int answer = -1;

    cout << question << " ";

    cin >> answer;

    return answer;
}

void CaptureWidth()
{
    cout << "Capturing Width...\n";

    width = Prompt("What is the width of the space?");
}

void CaptureLength()
{
    cout << "Capturing Length...\n";

    length = Prompt("What is the length of the space?");
}

void Calculate()
{
    cout << "Calculating...\n";
    cout << "width: " << width << " length: " << length << "\n";

    // calculate the space
    result = width * length;
    cout << "The Area of the space is: " << result << "\n";
}

void Reset()
{
    // logic for confirming

    cout << "Resetting to base...\n";
    width = 0;
    length = 0;
    result = 0;
}
