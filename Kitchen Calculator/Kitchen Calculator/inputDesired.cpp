
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int inputDesired(int desiredUnit) {
	bool iii = false;
	while (!iii) {
		cout << "Desired unit (Cups = 1, Tbsp = 2, Tsp = 3, FL oz = 4) : ";
		cin >> desiredUnit;

		if (desiredUnit < 1 || desiredUnit > 4) {
			cout << "Please enter a Valid number" << endl;
			iii = false;
		}
		else {
			iii = true;
			break;
		}

	}
	return desiredUnit;
}