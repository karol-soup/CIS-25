
#include<iostream>
using namespace std;

namespace namic {
	void getTemps(int* tempertures, int size) {

		cout << "Enter your tempeture readings:" << endl;

		for (int i = 0; i < size; i++) {
			while (true) {
				cout << "Hour " << (i + 1) << endl;
				cin >> *(tempertures + i);
				if (cin.fail()) {
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "Enter valid input." << endl;
				}

				else break;
			}

		}

	}

}