
#include <iostream>
#include <iomanip>
#include "include/convertUnit.h"
#include "include/display.h"
#include "include/displayResult.h"
#include "include/inputAmount.h"
#include "include/inputDesired.h"
#include "include/inputStart.h"
#include "include/intoFL.h"

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

	convertedAmount = convertUnit(intoFL(amount, startUnit), desiredUnit);
	displayResult(convertedAmount, amount, startUnit, desiredUnit);

	return 0;
}
