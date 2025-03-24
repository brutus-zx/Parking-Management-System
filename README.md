Brutus Parking System
Brutus Parking System is a simple parking management program written in C++. The system allows users to park different types of vehicles (Bikes, Cars, and Others) by selecting their vehicle type and making a payment. The program tracks the availability of parking spaces for each vehicle type and ensures that users are assigned a spot when available.

Features

Vehicle Selection: Users can select from three types of vehicles: Bike, Car, and Other.

Space Availability: The system checks the availability of parking spaces and assigns a spot if space is available.

Payment: The system processes the payment for parking, with different rates for each vehicle type.

Repeatability: Users can choose to run the system again to park additional vehicles without restarting the program.

Space Tracking: The system tracks the current number of parked vehicles for each type (Bike, Car, Other) and ensures no vehicle type exceeds the maximum parking capacity.

How to Use

Upon running the program, the system will ask you to select your vehicle type: Bike, Car, or Other.

Based on your selection, it will check the availability of parking spaces. If space is available, the system will assign a spot and ask for the payment.

After the transaction, the program will show a confirmation message and ask if you want to run the program again.

If you want to park another vehicle, type 'y' to continue. If you're done, type 'n' to exit the program.

Example Output
Thank you for considering Brutus Parking services!
Select your Vehicle Type
1. Bike
2. Car
3. Others
Bike
Your Bike will be safe here
Amount to be paid - 5$
Payment Successful
Park your Bike at space 1
Do you want to run it again? (y/n): y
Code Structure
Main Function: The program starts in the main() function. It loops to allow multiple parking transactions until the user chooses to exit.

Vehicle Type Handling: The program checks the vehicle type (Bike, Car, or Other) and ensures each type has its own space limit and rate.

Space Tracking: The program tracks the current number of parked bikes, cars, and other vehicles, ensuring the parking lot doesn’t exceed its capacity.

Contribution
Feel free to contribute to the project by submitting a pull request. If you find any bugs or issues, please open an issue on the repository.

License
This project is licensed under the MIT License - see the LICENSE file for details.
