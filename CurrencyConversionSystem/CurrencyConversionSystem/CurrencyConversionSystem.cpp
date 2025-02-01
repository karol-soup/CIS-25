// CurrencyConversionSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>

using namespace std;

//conversion rates between USD, EUR, GBP, and JPY

double convertcurrency(double, double);

int main()
{
	string currencies[]{ "USD","EUR","GBP","JPY" };
	// current currency rates from USD dolllar 1/29/2025
	const double EUR = .96;
	const double GBP = .80;
	const double JPY = 154.45;

	const double conversionRates[4][4]{// rows = from, colums = to
		1,EUR,GBP,JPY,
		(1 / EUR),1,(1 / EUR) * GBP,(1 / EUR) * JPY,// 1/rate converts it into USD 
		(1 / GBP),(1 / GBP) * EUR,1,(1 / GBP) * JPY,
		(1 / JPY),(1 / JPY) * EUR,(1 / JPY) * GBP,1
	};

	string initialCurrency;
	string toCurrency;
	double amount;
	double rate;


	cout << left << setw(10) << "*" << "USD, EUR, GBP, and JPY Currency Converter" << right << setw(10) << "*";
	cout << endl << endl;


	cout << "Enter initial currency: ";
	cin >> initialCurrency;;//need to check, check that the are words
	cout << "Enter currency you would like to convert to: ";
	cin >> toCurrency; //need to check
	cout << "Enter amount: ";
	cin >> amount;

	int fromIndex = -1, toIndex = -1;//error handeling
	for (int i = 0; i < 4; i++) {//will loop 4 times 
		if (currencies[i] == initialCurrency) fromIndex = i;//if"USD" = their input that is the row(from)
		if (currencies[i] == toCurrency) toIndex = i;
	}
	double convertedAmount = convertcurrency(amount, conversionRates[fromIndex][toIndex]);
	cout << fixed << setprecision(2);
	cout << amount << " " << initialCurrency << " is " << convertedAmount << " " << toCurrency;

	return 0;

}

double convertcurrency(double amount, double rate) {
	return (amount * rate);
}


