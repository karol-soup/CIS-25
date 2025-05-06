
#include <iostream>
#include <iomanip>
using namespace std;

using namespace std;

int getValidInput(int unit) {

	while (true) {//true
		//3<1// no3>4 no 0<1 yes 5>4 yes
		if (cin.fail()) {// checks if uput is valid first
			cout << "Please enter a number between 1 and 4" << endl;
			cin.clear();
			cin.ignore(numeric_limits <streamsize>::max(), '\n');
		}
		else if (unit < 1 || unit > 4) { //if unit  fits in this criteria we enter stament
			cout << "Please enter a number between 1 and 4" << endl; // will loop agaim
		}
		else {
			// if true will break out of loop
			break;
		}

	}
	return unit;
}