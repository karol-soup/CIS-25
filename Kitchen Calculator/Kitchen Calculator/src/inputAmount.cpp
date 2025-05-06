#include <iostream>
#include <iomanip>

using namespace std;

double inputAmount(double amount) {

	while (true) { //if input isnt a numeric value
		cout << "Initial amount: ";
		cin >> amount;
		if (cin.fail()) {
			cout << "Please enter a number valid value" << endl;
			cin.clear();
			cin.ignore(numeric_limits <streamsize>::max(), '\n');
		}
		else if (amount < 0) { //if unit  fits in this criteria we enter stament
			cout << "Please enter a positive number" << endl; // will loop agaim
		}
		else {
			// if true will break out of loop
			break;
		}

	}
	return amount;
}