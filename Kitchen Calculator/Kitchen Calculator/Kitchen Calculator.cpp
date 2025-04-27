
#include <iostream>
#include <iomanip>
#include "utils/convertUnit.h"
#include "utils/display.h"
#include "utils/displayResult.h"
#include "utils/inputAmount.h"
#include "utils/inputDesired.h"
#include "utils/inputStart.h"
#include "utils/intoFL.h"

#include <string>
#include <vector>
using namespace std;

struct Fraction {
    double numerator = 1;
    double denominator = 1;// n/1 = n
};

istream& operator>>(istream& input, Fraction& fraction) {
    char slash;
    input >> fraction.numerator >> slash >> fraction.denominator;
    if (slash != '/') {
        input.setstate(std::ios::failbit);//exception
        //
    }
    return input;
}

int main()
{
    Fraction myFraction;
    cout << "Enter your starting amount (e.g., 1/2): ";
    cin >> myFraction;

    if (cin.fail()) {
        cout << "Invalid fraction format." << endl;
    }
    else {
        cout << "Numerator: " << myFraction.numerator << endl;
        cout << "Denominator: " << myFraction.denominator << endl;
    }

    double fraction = myFraction.numerator / myFraction.denominator;
    cout << fraction;
	double amount = 0,
	convertedAmount = 0;
	int startUnit = 0, desiredUnit = 0;
	
	display();

    double fraction = myFraction.numerator / myFraction.denominator;
   // amount = inputAmount(amount);
	startUnit = inputStart(startUnit);
	desiredUnit = inputDesired(desiredUnit);

	convertedAmount = convertUnit(intoFL(amount,startUnit), desiredUnit);
	displayResult(convertedAmount,amount, startUnit, desiredUnit);
	
	return 0;
}
