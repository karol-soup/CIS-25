

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

namespace manic {

	int getSize() {
		int size = 0;
		while (true) {
			cout << "Enter the number of temperature readings: ";
			cin >> size;
			if (cin.fail()) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Enter valid input." << endl;
			}
			else if (size < 1 || size>100'000) {
				cout << "Must be between 1 - 100,000." << endl;
			}
			else break;
		}
		return size;
	}



	int getWindow(int size) {
		int windowSize = 0;
		while (true) {
			cout << "Enter your window size: ";
			cin >> windowSize;
			if (cin.fail()) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Enter valid input." << endl;
			}
			else if (windowSize < 1 || windowSize>size) {
				cout << "Must be between 1 - " << size << endl;
			}
			else break;
		}
		return windowSize;
	}
	// we dont want to modify anything
	void highestTempRead(const vector<int> &temperatures, int windowSize) {
		cout << "Highest temperture Readings = [";
		// <=  to read last element too     bounds checking

		for (int i = 0; i <= temperatures.size() - windowSize; i++) {

			// assume max temp=first i from window
			int maxTemp = temperatures.at(i);
			//              checking from that window
			for (int j = 1; j < windowSize; j++) {
				if (temperatures.at(j + i) > maxTemp) {
					maxTemp = temperatures.at(j + i);
				}
			}
			cout << maxTemp;
			if (i < (temperatures.size() - windowSize)) {
				cout << ",";
			}
		}
		cout << "]" << endl;
	}


	void minAndMax(const vector<int> &temperatures) {
		auto minIt = min_element(temperatures.begin(), temperatures.end());
		auto maxIt = max_element(temperatures.begin(), temperatures.end());

		cout << "Min temperture of readings is " << *minIt << endl;
		cout << "Max temperture of readings is " << *maxIt << endl;
	}

	//                    to pass be refernce we want o modify
	void getTemps(vector<int>& temperatures) {
		cout << "Enter your tempeture readings:" << endl;

		for (int i = 0; i < temperatures.size(); i++) {
			while (true) {
				cout << "Hour " << (i + 1) << endl;
				cin >> temperatures[i];
				if (cin.fail()) {
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "Enter valid input." << endl;
				}

				if (temperatures[i] < -100 || temperatures[i] > 100) {

					cout << "Must be between -100 - 100" << endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}

				else break;
			}

		}
	}
}