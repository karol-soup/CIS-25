
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void displayResult(double convertedAmount, double amount, int sUnit, int dUnit) {
	const int SIZE = 4;
	string units[SIZE]{ "cups","tbsp","tsp","FL OZ" };
	string dsUnit;
	string ddUnit;
	for (int i = 0; i < SIZE; i++) {
		if (sUnit == (i + 1)) {
			dsUnit = units[i];
		}
		if (dUnit == (i + 1)) {
			ddUnit = units[i];
		}
	}

	cout << amount << " " << dsUnit << " = " << fixed << setprecision(2) << convertedAmount << " " << ddUnit;

}