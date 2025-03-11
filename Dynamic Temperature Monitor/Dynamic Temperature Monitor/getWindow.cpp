
#include<iostream>
using namespace std;
namespace namic {
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
}