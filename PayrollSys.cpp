#include <iostream>
#include <string>
using namespace std;

string name;
int hours;
double salary;
double OvertimePay;
double NetSalary;
int ratePerHour;

void getEmployeeDetails()
{

    cout << "Enter Employee Name: ";
    cin >> name;
    cout << "Enter Overtime Hours: ";
    cin >> hours;
    cout << "Enter Employee Salary: ";
    cin >> salary;
    cout << "Enter Rate Per Hour: ";
    cin >> ratePerHour;
}

void calculateOvertimePay()
{
    OvertimePay = hours * ratePerHour;
}

void calculateNetSalary()
{
    NetSalary = salary + OvertimePay;
}

void displayPayslip()
{
    cout << "\n========== EMPLOYEE PAYSLIP ==========\n";
    cout << "Employee Name : " << name << endl;
    cout << "Basic Salary  : Ksh " << salary << endl;
    cout << "Overtime Hours: " << hours << endl;
    cout << "Overtime Pay  : Ksh " << OvertimePay << endl;
    cout << "Net Salary    : Ksh " << NetSalary << endl;
    cout << "======================================\n";
}

int main()
{
    getEmployeeDetails();
    calculateOvertimePay();
    calculateNetSalary();
    displayPayslip();
    return 0;
}