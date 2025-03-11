
#include<iostream>
#include<vector>
using namespace std;

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
	cout << ']';


		delete[] tempertures;
		tempertures = nullptr;
	return 0;
}

/*
input: tempurture readings
input K(last hours k)

void sort(int numbers[], int size) {//bubble sort
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size-1-i; j++) {
			if (numbers[i] > numbers[j+1]) {
				swap(numbers, i, j+1);
			}
		}
	}
}
void swap(int numbers[], int i, int j) {
	int temp = numbers[i];
	numbers[i] = numbers[j];
	numbers[j] = temp;
}

*/