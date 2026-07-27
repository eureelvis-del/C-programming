#include <iostream>

using namespace std;

int main()
{
    double balance, withdrawalAmount;

    cout << "=== Mobile Money Savings Withdrawal System ===" << endl;
    cout << "Enter initial account balance: $";
    cin >> balance;

    // Loop until balance is zero or withdrawal exceeds balance
    while (balance > 0)
    {
        cout << "\nCurrent Balance: $" << balance << endl;
        cout << "Enter amount to withdraw: $";
        cin >> withdrawalAmount;

        if (withdrawalAmount > balance)
        {
            cout << "\nError: Insufficient funds! Withdrawal exceeds available balance." << endl;
            break; // Stop loop if withdrawal amount > balance
        }

        balance -= withdrawalAmount;
        cout << "Withdrawal successful! Remaining balance: $" << balance << endl;

        if (balance == 0)
        {
            cout << "\nYour account balance has reached $0.00." << endl;
        }
    }

    cout << "Session ended. Thank you for using our service." << endl;
    return 0;
}