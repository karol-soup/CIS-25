// Dynamic Temperature Monitor(vectors).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include "monitorForVectors.h"
using namespace std;



int main() {
	int size = manic:: getSize();

	vector<int> temperatures(size);

	manic:: getTemps(temperatures);

	system("cls");

	cout << "Temperture Readings = ";
	for (int val : temperatures)
		cout << val << " ";
	cout << endl;

	int windowSize = manic::getWindow(size);

	manic::highestTempRead(temperatures, windowSize);

	manic::minAndMax(temperatures);

	return 0;
}

