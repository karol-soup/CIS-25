
#include<iostream>
#include<vector>
using namespace std;

void highestTemp(int [], int, int);

int main() {

	int size;//n input by user
	int* tempertures; //pointer will hold array

	while (true) {
		cout << "Enter the size of your array: ";
		cin >> size;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Enter valid input." << endl;
		}
		else if (size < 0 || size>100'000) {
			cout << "Must be between 1 - 100,000." << endl;
		}
		else break;
	}
		
	//created an array using dma creatingan array sized by user
	tempertures = new int[size];
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

	cout << "Tempertures = [";
	for (int i = 0; i < size; i++) {
		cout << *(tempertures + i)<<",";
	}
	cout << ']'<<endl;

	int windowSize = 3;
	cout << "highest temp for windowsize 3: "<<endl;
	highestTemp(tempertures, size, windowSize);

		delete[] tempertures;
		tempertures = nullptr;
	return 0;
}


void highestTemp(int numbers[], int size, int windowSize) {
	//                   bounds checking
	for (int i = 0; i < size-windowSize; i++) {
		cout << "Window " << (i + 1) << " :" << endl;
		// assume max temp=first i from window
		int maxTemp = numbers[i];
		//              checking from that window
		for (int j = 1; j < windowSize; j++) {
			if (numbers[j+i] > maxTemp) {
				maxTemp = numbers[j+i];
			}
	
		}
		cout << "maxtemp " << maxTemp << endl;
	}
}

