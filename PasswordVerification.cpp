#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Predefined credentials
    const string CORRECT_USERNAME = "admin";
    const string CORRECT_PASSWORD = "Password123";

    string usernameInput, passwordInput;

    cout << "=== System Login ===" << endl;

    // Loop repeatedly until correct credentials are provided
    do
    {
        cout << "\nEnter username: ";
        cin >> usernameInput;
        cout << "Enter password: ";
        cin >> passwordInput;

        if (usernameInput == CORRECT_USERNAME && passwordInput == CORRECT_PASSWORD)
        {
            cout << "\nAccess Granted. Welcome to the system!" << endl;
            break;
        }
        else
        {
            cout << "Incorrect credentials, try again." << endl;
        }
    } while (true);

    return 0;
}