
#include <iostream>
#include <string>
#include <iomanip>
#include "Kitchen Calculator.h"

using namespace std;

int main()
{
	bool i = false;//1st while loop
	bool ii = false; //2nd while loop
	bool iii = false; //3rd while loop
	double amount = 0,
	convertedAmount = 0;
	int startUnit = 0, desiredUnit = 0;
	
	display();

	//while (!false) {
		cout << "Initial amount: ";
		cin >> amount;
	/*if (amount != double) {
			cout << "Please enter a Valid number" << endl;
			i = false;// will loop agaim
		}
		else {
			i = true;// if true will break out of loop
			break;
	}*/
	
	
	

	while (!ii) {//true
		cout << "Starting unit (Cups = 1, Tbsp = 2, Tsp = 3, FL oz = 4) : ";
		cin >> startUnit;
		//3<1// no3>4 no 0<1 yes 5>4 yes
		if (startUnit < 1 || startUnit > 4 ) { //if unit  fits in this criteria we enter stament
			cout << "Please enter a Valid number" << endl;
			ii = false;// will loop agaim
		}
		else {
			ii = true;// if true will break out of loop
			break;
		}
		
	}

	while (!false) {
		cout << "Desired unit (Cups = 1, Tbsp = 2, Tsp = 3, FL oz = 4) : ";
		cin >> desiredUnit;

		if (desiredUnit < 1 || desiredUnit > 4) {
			cout << "Please enter a Valid number" << endl;
			iii = false;
		}
		else {
			iii = true;
			break;
		}
		
	}

	convertedAmount = convertUnit(intoFl(amount,startUnit), desiredUnit);
	displayResult(convertedAmount,amount, startUnit, desiredUnit);

	
	return 0;
}

void display() {
	cout << setw(80) << setfill('*') << ""<<endl;
	cout <<left<< setw(80) << "Kitchen Calculator " << endl;
	cout <<left<<setw(80)<< "Please convert fractions into decimals before inputing your initial amount " << endl;
	cout << setw(80) << setfill('*') << "" << endl;
	cout << setfill(' ') << "" << endl;
}
		//<< setw(80) << setfill(' ') << "" << endl;


double intoFl(double amount, int sUnit) {
	if (sUnit == 1) return (amount * 8); //cups to fl
	if (sUnit == 2) return (amount / 2); //tbsp to fl
	if (sUnit == 3) return (amount * 6);//tsp to fl
	if (sUnit == 4) return amount; // fl to fl
	else return -1;

}

double convertUnit(double floz,int dUnit) {
	if (dUnit == 1) return floz / 8; //fl to cups
	if (dUnit == 2) return floz * 2;// to tbs
	if (dUnit == 3) return floz * 6;//to tsp
	if (dUnit == 4) return floz;// to fl
	else
		return -1;
}

void displayResult(double convertedAmount, double amount, int sUnit, int dUnit) {
	const int SIZE = 4;
	string units[SIZE]{ "cups","tbsp","tsp","FL OZ" };
	string dsUnit;
	string ddUnit;
	for (int i = 0; i < SIZE; i++) {
		if (sUnit == (i + 1)) {
			dsUnit = units[i];
		}
		if (dUnit == (i + 1)) {
			ddUnit = units[i];
		}
	}

	cout << amount << " " << dsUnit << " = " << fixed << setprecision(2) << convertedAmount << " " << ddUnit;

}
