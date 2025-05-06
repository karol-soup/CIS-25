
#include <iostream>
#include <iomanip>

using namespace std;

int inputDesired(int desiredUnit) {


	while (true) {//true
		cout << "Desired unit (Cups = 1, Tbsp = 2, Tsp = 3, FL oz = 4) : ";
		cin >> desiredUnit;
		//3<1// no3>4 no 0<1 yes 5>4 yes
		if (cin.fail()) {
			cout << "Please enter a number between 1 and 4" << endl;
			cin.clear();
			cin.ignore(numeric_limits <streamsize>::max(), '\n');
		}
		else if (desiredUnit < 1 || desiredUnit > 4) { //if unit  fits in this criteria we enter stament
			cout << "Please enter a number between 1 and 4" << endl; // will loop agaim
		}
		else {
			// if true will break out of loop
			break;
		}

	}
	return desiredUnit;
}

