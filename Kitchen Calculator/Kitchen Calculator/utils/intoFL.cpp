
#include <iostream>
#include <iomanip>

using namespace std;

double intoFL(double amount, int sUnit) {
	if (sUnit == 1) return (amount * 8); //cups to fl
	if (sUnit == 2) return (amount / 2); //tbsp to fl
	if (sUnit == 3) return (amount / 6);//tsp to fl
	if (sUnit == 4) return amount; // fl to fl
	else return -1;

}