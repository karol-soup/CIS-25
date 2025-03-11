

#include<iostream>
using namespace std;

namespace namic {
	void highestTempRead(int numbers[], int size, int windowSize) {

		cout << "Highest temperture Readings = [";
		// <=  to read last element too     bounds checking
		for (int i = 0; i <= size - windowSize; i++) {

			// assume max temp=first i from window
			int maxTemp = *(numbers + i);
			//              checking from that window
			for (int j = 1; j < windowSize; j++) {
				if (numbers[j + i] > maxTemp) {
					maxTemp = *(numbers + (j + i));
				}
			}
			cout << maxTemp;
			if (i < (size - windowSize)) {
				cout << ",";
			}
		}
		cout << "]" << endl;
	}

}