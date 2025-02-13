
#include <iostream>
#include <iomanip>
#include "Kitchen Calculator.h"

using namespace std;

int main()
{
	
	double amount = 0,
	convertedAmount = 0;
	int startUnit = 0, desiredUnit = 0;
	
	display();

    amount = inputAmount(amount);
	startUnit = inputStart(startUnit);
	desiredUnit = inputDesired(desiredUnit);

	convertedAmount = convertUnit(intoFl(amount,startUnit), desiredUnit);
	displayResult(convertedAmount,amount, startUnit, desiredUnit);
	
	return 0;
}




