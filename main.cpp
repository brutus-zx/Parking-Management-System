#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    char r = 'y'; // Initialize with 'y' to start the loop

    int currbike = 0;
    int currcar = 0;
    int curroth = 0;

    const int max_bike = 30;
    const int max_car = 50;
    const int max_oth = 20;

    while (r == 'y' || r == 'Y') {
        cout << "Thank you for considering Brutus Parking services!" << endl;
        cout << "Select your Vehicle Type" << endl;
        cout << "1. Bike" << endl;
        cout << "2. Car" << endl;
        cout << "3. Others" << endl;

        // Get the vehicle type from the user
        cin >> name;

        if (name == "bike" || name == "Bike") {
            if (currbike < max_bike) {
                cout << "Your Bike will be safe here" << endl;
                cout << "Amount to be paid - 5$" << endl;
                // Show QR using implementing IOT devices
                cout << "Payment Successful" << endl;
                cout << "Park your Bike at space " << currbike + 1 << endl;
                currbike++;
            } else {
                cout << "Sorry, we are currently out of space for bikes." << endl;
            }
        }
        else if (name == "car" || name == "Car") {
            if (currcar < max_car) {
                cout << "Your car will be safe here" << endl;
                cout << "Amount to be paid - 7$" << endl;
                // Show QR using implementing IOT devices
                cout << "Payment Successful" << endl;
                cout << "Park your car at space " << currcar + 1 << endl;
                currcar++;
            } else {
                cout << "Sorry, we are currently out of space for cars." << endl;
            }
        }
        else if (name == "others" || name == "Others") {
            if (curroth < max_oth) {
                cout << "Your Vehicle will be safe here" << endl;
                cout << "Amount to be paid - 10$" << endl;
                // Show QR using implementing IOT devices
                cout << "Payment Successful" << endl;
                cout << "Park your Vehicle at space " << curroth + 1 << endl;
                curroth++;
            } else {
                cout << "Sorry, we are currently out of space for other vehicles." << endl;
            }
        }
        else {
            cout << "Please enter a valid Vehicle Type" << endl;
        }

        cout << "Do you want to run it again? (y/n): ";
        cin >> r;
    }

    return 0;
}
