// CurrencyConversionSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype> // for toupper
#include <algorithm> // for transform 
using namespace std;

string currencies[]{ "USD","EUR","GBP","JPY" };
//currenct conversion rates between USD, EUR, GBP, and JPY
const double EUR = .96;
const double GBP = .80;
const double JPY = 154.45;

const double conversionRates[4][4]{// rows = from, colums = to
	1,EUR,GBP,JPY,
	(1 / EUR),1,(1 / EUR) * GBP,(1 / EUR) * JPY,// 1/rate converts it into USD 
	(1 / GBP),(1 / GBP) * EUR,1,(1 / GBP) * JPY,
	(1 / JPY),(1 / JPY) * EUR,(1 / JPY) * GBP,1
};

double convertcurrency(double amount, double rate) { // pass amount and the rate which is in the array
	return (amount * rate);
}

string toUpper(string& currency) { //pass by value
	transform(currency.begin(), currency.end(), currency.begin(), toupper); // transform applies toupper to each character of the string
	return currency;

}

int main()
{
	string initialCurrency;
	string toCurrency;
	double amount;
	double pRate;

	cout << left << setw(10) << "*" << "USD, EUR, GBP, and JPY Currency Converter" << right << setw(10) << "*";
	cout << endl << endl;

	cout << "Enter initial currency: ";
	cin >> initialCurrency;
	cout << "Enter currency you would like to convert to: ";
	cin >> toCurrency; 
	cout << "Enter amount: ";
	cin >> amount;

	if (amount < 0) {
		cout << "Invalid amount, try again";
		return -1;
	}

	//convert input to uppercase
	initialCurrency = toUpper(initialCurrency);
	toCurrency = toUpper(toCurrency);

	int fromIndex = -1, toIndex = -1;//error handeling
	for (int i = 0; i < 4; i++) {//will loop 4 times 
		if (currencies[i] == initialCurrency) fromIndex = i;//if"USD" = their input that is the row(from)
		if (currencies[i] == toCurrency) toIndex = i;
	}

	//check for invalid input
	if (fromIndex == -1 || toIndex == -1) {
		cout << "Invalid currency, try again";
		return -1;
	}

	double convertedAmount = convertcurrency(amount, conversionRates[fromIndex][toIndex]); // calling the function
	cout << fixed << setprecision(2);
	cout << amount << " " << initialCurrency << " is " << convertedAmount << " " << toCurrency << endl << endl;
	


	cout << left << setw(10) << "*" << "For promotional rate" << right << setw(10) << "*" << endl << endl;
	cout << "Enter the promotional rate from " << initialCurrency << " to " << toCurrency << endl;
	cin >> pRate;

	convertedAmount = convertcurrency(amount, pRate);// pass amount and new rate
	cout << "Adjusted with promotional rate ";
	cout << fixed << setprecision(2);
	cout << amount << " " << initialCurrency << " is " << convertedAmount << " " << toCurrency << endl << endl;

	
	return 0;

}








































