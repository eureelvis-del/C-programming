#include <iostream>
#include <string>
using namespace std;

string name;
int UnitsConsumed;
int ratePerUnit;
int billAmount;

void getCustomerDetails()
{
    cout << "Enter Customer Name: ";
    getline(cin, name);
    cout << "Enter Units Consumed: ";
    cin >> UnitsConsumed;
    cout << "Enter Rate per Unit: ";
    cin >> ratePerUnit;
}

void calculateBillAmount()
{
    billAmount = UnitsConsumed * ratePerUnit;
}

void applyDiscount()
{
    if (UnitsConsumed > 100)
    {
        billAmount *= 0.9; // Apply 10% discount
    }
}

void displayBill()
{
    cout << "\n========== ELECTRICITY BILL ==========\n";
    cout << "Customer Name : " << name << endl;
    cout << "Units Consumed: " << UnitsConsumed << endl;
    cout << "Rate per Unit : " << ratePerUnit << endl;
    cout << "Bill Before Discount: Ksh " << UnitsConsumed * ratePerUnit << endl;
    cout << "Bill Amount   : Ksh " << billAmount << endl;
    cout << "======================================\n";
}

int main()
{
    getCustomerDetails();
    calculateBillAmount();
    applyDiscount();
    displayBill();

    return 0;
}
