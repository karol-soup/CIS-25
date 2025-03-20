
#include <iostream>
#include <iomanip>
#include "convertUnit.h"
#include "display.h"
#include "displayResult.h"
#include "inputAmount.h"
#include "inputDesired.h"
#include "inputStart.h"
#include "intoFL.h"

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
