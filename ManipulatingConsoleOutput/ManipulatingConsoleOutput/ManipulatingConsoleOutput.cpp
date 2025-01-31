// ManipulatingConsoleOutput.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	int idNumber = 00001;
	double balance = 73.96;
	string name = "Karol";

	int idNumber2 = 00002;
	double balance2 = 100.06;
	string name2 = "Carly";

	
		cout << setw(30) << "Daily Report" << endl;//; pushes daily report to the right
		cout << left << setw(10) << "ID" << setw(10) << "Name" << setw(10) << "Balance" << endl;//pushes output to the left
		cout << left << setw(10) << "----" << setw(10) << "------" << setw(10) << "------" << endl;// by making setw() the smae we ensure l the output is alligned
		cout << left << setw(10) << idNumber << setw(10) << name << "$" << balance << endl;//displays output
		cout << left << setw(10) << idNumber2 << setw(10) << name2 << "$" << balance2 << endl;

		return 0;
	

}


