
#include <iostream>
#include <string>
#include "getValidation.h"

using namespace std;


namespace getval {

	

	string getName() { 
		string input;
		while (true) {
			cout << "Enter your name:  " << endl;
			getline(cin, input);
			if (!input.empty()) {
				return input;
			}
			else {
				cout << "Invalid input" << endl;
			}
		}

	}

	string getEmail() {
		string input;
		while (true) {
			cout << "Enter your email:  " << endl;
			getline(cin, input);
			if (!input.empty()) {
				return input;
			}
			else {
				cout << "Invalid input" << endl;
			}
		}
	}


	Address getAddress() {
		//instance of Adress, have acess to attributes
		Address addy;

		while (true) {
			cout << "Enter your street:  " << endl;
			getline(cin, addy.street);
			if (!addy.street.empty()) {
				break;
			}
			else {
				cout << "Invalid input" << endl;
			}
		}

		while (true) {
			cout << "Enter your city: ";
			getline(cin, addy.city);
			if (!addy.city.empty()) break;
			cout << "Invalid input" << endl;
		}

		while (true) {
			cout << "Enter your zipcode: ";
			cin >> addy.zipCode;
			if (cin.fail()) {
				cin.clear();
				cin.ignore(numeric_limits <streamsize>::max(), '\n');
				cout << "Invalid input" << endl;
			}
			else {
				break;
			}
		}

		return addy;

	}
}