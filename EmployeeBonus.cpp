#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string name;
    double basicSalary, Bonus, totalSalary;

    cout << "=== Employee Bonus Calculator ===" << endl;

    for (int i = 1; i <= 5;)
    {
        cout << "\nEnter employee name: ";
        cin >> name;
        cout << "Enter basic salary: ";
        cin >> basicSalary;

        Bonus = basicSalary * 0.05;
        totalSalary = basicSalary + Bonus;

        cout << fixed << setprecision(2);
        cout << "\n[Report for " << name << "]" << endl;
        cout << "Basic Salary: $" << basicSalary << endl;
        cout << "Bonus (5%): $" << Bonus << endl;
        cout << "Total salary " << name << ": $" << totalSalary << endl;
    }

    return 0;
}
