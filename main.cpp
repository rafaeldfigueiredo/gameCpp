#include <iostream>
#include <string>
#include <vector>
#include <limits>

using namespace std;

void mainMenu(), renameHero(), firstRoomChoice(), openInventory();
string name = "Bob";
vector inventory = {"Armor", "Sword"};

void mainMenu()
{
    int mainMenuChoice = 0;
    char exitChoice = 'N';
    cout << "Select an option:\n1. Game On\n2. Exit\nR: ";
    cin >> mainMenuChoice;
    while (exitChoice == 'N')
    {
        switch (mainMenuChoice)
        {
        case 1:
            cout << "Time to Game" << endl;
            exitChoice = 'Y';
            break;
        case 2:
            cout << "Time to Exit" << endl;
            exitChoice = 'Y';
            break;
        default:
            cout << "Bruh";
        }
    }
}
void renameHero()
{
    char choice;
    string newName;

    // Initial prompt
    cout << "Do you want to rename your hero? (Y/N)\nR: ";
    cin >> choice;

    // Handle input directly without nested switch
    if (choice == 'Y' || choice == 'y')
    {
        cout << "Please type a new name: ";
        cin >> newName;

        // Confirmation loop
        do
        {
            cout << "Is '" << newName << "' correct? (Y/N)\nR: ";
            cin >> choice;

            if (choice == 'Y' || choice == 'y')
            {
                name = newName; // Update the hero's name
                cout << "Hero renamed to " << name << endl;
                break; // Exit the confirmation loop
            }
            else if (choice == 'N' || choice == 'n')
            {
                cout << "Enter a new name: ";
                cin >> newName; // Get a new name
            }
            else
            {
                cout << "Invalid option. Please enter Y or N.\n";
            }
        } while (true); // Loop until a valid confirmation is given
    }
    else if (choice == 'N' || choice == 'n')
    {
        cout << "Hero name remains " << name << endl;
    }
    else
    {
        cout << "Invalid option. Please enter Y or N.\n";
    }

    // Clear the input buffer
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
void firstRoomChoice()
{
}

void openInventory()
{
    for (size_t i = 0; i < inventory.size(); i++)
    {
        cout << inventory[i];
    }
}

int main()
{
    renameHero();
    return 0;
}
