
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

double convertUnit(double floz, int dUnit) {
	if (dUnit == 1) return floz / 8; //fl to cups
	if (dUnit == 2) return floz * 2;// to tbs
	if (dUnit == 3) return floz * 6;//to tsp
	if (dUnit == 4) return floz;// to fl
	else
		return -1;
}