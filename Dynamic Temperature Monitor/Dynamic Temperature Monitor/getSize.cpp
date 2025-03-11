
#include<iostream>
using namespace std;
namespace namic{
	int getSize() {
		int size = 0;
		while (true) {
			cout << "Enter the size of your array: ";
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

}