
#include<iostream>
using namespace std;

namespace namic {
	void displayTemps(int* tempertures, int size) {
		cout << "Tempertures = [";
		for (int i = 0; i < size; i++) {
			cout << *(tempertures + i);
			if (i < size - 1) {
				cout << ",";
			}
		}
		cout << ']' << endl;
	}

}