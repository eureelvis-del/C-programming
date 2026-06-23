//Bank Account System
#include <iostream>
#include <string>
using namespace std;

class BankAccount {            //Initialization of class BankAccount
private:
    string accountHolder;    //Initialization of class Attributes
    int accountNumber;
    double accountBalance;                              

public:
    BankAccount(string holder, int number, double balance) { //Constructor to initialize the attributes
        accountHolder = holder;
        accountNumber = number;
        accountBalance = balance;

        cout<<"Account successfully created" << endl;
    }
 void displayAccount()  {   //fution to display the account details
    
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Balance: $" << accountBalance << endl;
    }

    ~BankAccount() {  //Destructor to close the account
        cout << "Account closed for " << accountHolder << endl;
    }
 };

int main() {
    BankAccount account1("John Grisham", 234567, 10000.50);
    account1.displayAccount();
} ; 