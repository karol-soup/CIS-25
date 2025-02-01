// ManipulatingConsoleOutput.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	int id = 1;
	int id2 = 2;
	string name = "Karol";
	string name2 = "Carly";
	double balance = 100.00;
	double balance2 = 50.00;

	cout << setw(27) << "Daily Report" << endl;
	cout << left << setw(10) << "ID" << setw(10) << "Name" << setw(10) << "Balance" << endl; //header //left so ID is to the left not the right

	cout << setfill('-') << setw(5) << "-" << "" << setfill(' ') << setw(5) << "";//"" allows the - to separate
	cout << setfill('-') << setw(5) << "-" << "" << setfill(' ') << setw(5) << ""; // fills w/ - and to ensure it doesnt to any other white spaces we ' '
	cout << setfill('-') << setw(5) << "-" << "" << setfill(' ') << setw(5) << "" << endl;
	

	cout << setfill('0') << setw(5) << right << id << setfill(' ') << ""; //fills with 0 id to right insted of it going first
	cout << setw(10) << name;
	cout << setw(7) << fixed << setprecision(2) << "$"  << balance << endl;// 7 because setw didnt account for the 3 char of .00

	cout << setfill('0') << setw(5) << right << id2 << setfill(' ') << "";
	cout << setw(10) << name2;
	cout << setw(7) << fixed << setprecision(2) << "$" << balance2 << endl;

	
		return 0;
	

}


