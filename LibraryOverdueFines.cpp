#include <iostream>
using namespace std;

int main() {
    // --- Declare variables ---
    int bookID;
    int dueDate;
    int returnDate;
    int daysOverdue;
    float fineRate; 
    float fineAmount;

    // --- Get input from user ---
    cout << "Enter Book ID: ";
    cin >> bookID;

    cout << "Enter Due Date (as day number e.g. 10): ";
    cin >> dueDate;

    cout << "Enter Return Date (as day number e.g. 18): ";
    cin >> returnDate;

    // --- Calculate days overdue ---
    daysOverdue = returnDate - dueDate;

    // --- Determine fine rate using if-else ---
    if (daysOverdue <= 0) {
        // Book returned on time
        fineRate = 0;
        fineAmount = 0;
    } else if (daysOverdue <= 7) {
        // Up to 7 days overdue
        fineRate = 20;
        fineAmount = daysOverdue * fineRate;
    } else if (daysOverdue <= 14) {
        // 8 to 14 days overdue
        fineRate = 50;
        fineAmount = daysOverdue * fineRate;
    } else {
        // 15 days or more overdue
        fineRate = 100;
        fineAmount = daysOverdue * fineRate;
    }

    // --- Display results ---
    cout << "\n--- Library Fine Summary ---" << endl;
    cout << "Book ID       : " << bookID << endl;
    cout << "Due Date      : " << dueDate << endl;
    cout << "Return Date   : " << returnDate << endl;
    cout << "Days Overdue  : " << daysOverdue << endl;
    cout << "Fine Rate     : Ksh. " << fineRate << " per day" << endl;
    cout << "Fine Amount   : Ksh. " << fineAmount << endl;

    return 0;
}