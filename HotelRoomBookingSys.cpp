//Hotel room booking system
#include <iostream>
#include <string>   
using namespace std;

class RoomBooking {                                     //Initializing class RoomBooking
private:
    string GuestName;                             //Declaring private variables
    int roomNumber;
    int numberOfdays;

public:                                            //Declaring public variables
    RoomBooking(string name, int roomNum, int days) {
        GuestName = name;
        roomNumber = roomNum;
        numberOfdays = days;
        cout<<"Room Booking Confirmed"<<endl;
    }
void displayBooking() {                                   //Function to display booking details
        cout << "Guest Name: " << GuestName << endl;
        cout << "Room Number: " << roomNumber << endl;
        cout << "Number of Days: " << numberOfdays << endl;
    }
    ~RoomBooking() {                                     //Destructor to release room after booking
        cout << "Booking ended, Room released" << endl;
    }
};

int main () {                       //Main function to take input from user and create RoomBooking object
    string name;
    int roomNum, days;

    cout << "Enter Guest Name: ";
    getline(cin, name);
    cout << "Enter Room Number: ";
    cin >> roomNum;
    cout << "Enter Number of Days: ";
    cin >> days;

    RoomBooking booking(name, roomNum, days);   //Creating object of RoomBooking class
    booking.displayBooking();               //Calling function to display booking details

    return 0;
}