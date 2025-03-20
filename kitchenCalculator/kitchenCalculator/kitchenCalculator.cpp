

#include <iostream>
#include <iomanip>
#include "utils/convertedUnit.hpp"
#include "utils/display.hpp"
#include "utils/displayResult.hpp"
#include "utils/inputAmount.hpp"
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

	convertedAmotunt = convertUnit(intoFl(amount, startUnit), desiredUnit);
	displayResult(convertedAmount, amount, startUnit, desiredUnit);

	return 0;
}

