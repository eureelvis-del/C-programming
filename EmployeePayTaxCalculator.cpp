//Program to calculate Employee pay and Tax Deductions
#include <iostream>
#include <string>
using namespace std;

int main() {
    // --- Declare variables ---
    string employeeName;
    float hoursWorked;
    float ratePerHour;
    float basicPay;
    float tax;
    float netPay;

    // --- Get input from user ---
    cout << "Enter employee name: ";
    getline(cin, employeeName);

    cout << "Enter hours worked: ";
    cin >> hoursWorked;

    cout << "Enter rate per hour (Ksh): ";
    cin >> ratePerHour;

    // --- Calculate basic pay ---
    basicPay = hoursWorked * ratePerHour;

    // --- Calculate tax using if-else based on basic pay ---
    if (basicPay > 50000) {
        // Over 50,000 -> 20% tax
        tax = 0.20 * basicPay;
    } else if (basicPay >= 20000 && basicPay <= 50000) {
        // Between 20,000 and 50,000 -> 10% tax
        tax = 0.10 * basicPay;
    } else {
        // Below 20,000 -> No tax
        tax = 0;
    }

    // --- Calculate net pay ---
    netPay = basicPay - tax;

    // --- Display results ---
    cout << "\n--- Employee Pay Summary ---" << endl;
    cout << "Employee Name : " << employeeName << endl;
    cout << "Hours Worked  : " << hoursWorked << endl;
    cout << "Rate Per Hour : Ksh. " << ratePerHour << endl;
    cout << "Basic Pay     : Ksh. " << basicPay << endl;
    cout << "Tax           : Ksh. " << tax << endl;
    cout << "Net Pay       : Ksh. " << netPay << endl;

    return 0;
}