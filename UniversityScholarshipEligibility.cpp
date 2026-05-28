#include <iostream>
#include <string>
using namespace std;

int main() {
    // --- Declare variables ---
    string studentName;
    int marks;
    float attendance;
    string scholarship;

    // --- Get input from user ---
    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter exam marks (0-100): ";
    cin >> marks;

    cout << "Enter attendance percentage (0-100): ";
    cin >> attendance;

    // --- Nested if statements to determine scholarship ---
    if (marks >= 70) {
        // Marks are 70 or above
        if (attendance >= 80) {
            scholarship = "Full Scholarship";
        } else {
            scholarship = "Partial Scholarship";
        }
    } else if (marks >= 50 && marks <= 69) {
        // Marks are between 50 and 69
        if (attendance >= 85) {
            scholarship = "Partial Scholarship";
        } else {
            scholarship = "No Scholarship";
        }
    } else {
        // Marks are below 50
        scholarship = "No Scholarship";
    }

    // --- Display result ---
    cout << "\n--- Scholarship Result ---" << endl;
    cout << "Student Name : " << studentName << endl;
    cout << "Scholarship  : " << scholarship << endl;

    return 0;
}