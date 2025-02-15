
#include <iostream>
#include <iomanip>
#include "utils/convertedUnit.h"
#include "display.h"
#include "utils/displayResult.h"
#include "utils./inputAmount.hpp"
#include "utils/inputDesired.hpp"
#include "utils/intoFL.hpp"
#include "utils/inputStart.hpp"

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




