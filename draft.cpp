#include<iostream>

using namespace std;

// display
void displayMenu()
{
    cout << "Welcome to Tic Tac Toe!" << endl;
    cout << endl << "Choose an option" << endl;
    cout << "[1] Play" << endl;
    cout << "[2] Instructions" << endl;
    cout << "[3] Quit" << endl << endl;
}

void gameplayOptions()
{
    cout << "Select an option\n";
    cout << "[1] 1v1" << endl;
    cout << "[2] AI" << endl;
    cout << "[3] AI random" << endl;
    cout << "[4] Round Robin (four players) max" << endl;
    cout << "[5] Back to display menu" << endl << endl;
}

int playerChoice()
{
    int choice;
    cout << "Choice: ";
    cin >> choice;
    return choice;
}

int main()
{
    int choice, choice1;

    do
    {
    displayMenu();
    choice = playerChoice();

    switch(choice)
    {
        case 1:
            gameplayOptions();
            choice1 = playerChoice();
            switch(choice)
            {
                case 1:
                    cout << "Code to be done" << endl;
                    break;
                case 2:
                    cout << "Code to be done" << endl;
                    break;
                case 3:
                    cout << "Code to be done" << endl;
                    break;
                case 4:
                    cout << "Code to be done" << endl;
                    break;
                case 5:
                    displayMenu();
                    break;
            }
            break;
        case 2:
            cout << "Lorem ipsum" << endl << endl;
            break;
        case 3:
            cout << "Program quitting" << endl << endl;
            break;
    }
    } while(choice != 3);
}