// Dynamic Temperature Monitor(vectors).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

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
			}

			else break;
		}

	}
}
                    // we dont want to modify anything
void highesTempRead(const vector<int>& temperatures, int windowSize) {
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

int main() {
	int size = 0;
	cout << "enter number of temperture readings: ";
		cin >> size;
	vector<int> temperatures(size);

	getTemps(temperatures);

	cout << "Temperture Readings = ";
	for (int val : temperatures)
		cout << val << " ";
	cout << endl;

	int windowSize = 3;

	highesTempRead(temperatures, windowSize);

	return 0;
}