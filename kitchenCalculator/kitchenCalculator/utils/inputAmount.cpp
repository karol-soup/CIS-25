
#include <iostream>
#include <iomanip>

using namespace std;

double inputAmount(double amount) {
	cout << "Initial amount: ";

	while (!(cin >> amount)) { //if input isnt a numeric value
		cout << "Please enter a valid value: " << endl;
		cin.clear();//to clear the error bc i want to cont reading user input
		cin.ignore();//to remove any characters used
	}
	return amount;
}
