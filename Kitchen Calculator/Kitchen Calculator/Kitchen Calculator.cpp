
#include <iostream>
#include <iomanip>
#include "display.h"
#include "inputAmount.h"
#include "inputStart.h"
#include "inputDesired.h"
#include "intoFL.h"
#include "convertUnit.h"
#include "displayResult.h"

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

	convertedAmount = convertUnit(intoFL(amount,startUnit), desiredUnit);
	displayResult(convertedAmount,amount, startUnit, desiredUnit);
	
	return 0;
}





