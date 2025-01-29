

#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;


int main() {


	double first_num;
	double second_num;
	char operand;
	int i = 0;

	


		cout << "Enter the operation you would like to use (Please enter one of the following, +, -, /, *): ";
		cin >> operand;
		if(operand !=  '+' && operand != '-' && operand != '/' && operand != '*') {
			cout << "Input invalid, try again";
			exit(1);
		}
		
		cout << endl << "Enter your first number: ";
		while (!(cin >> first_num)) {
			cout << "Input invalid, try again";
			exit(1);
		}


		cout << "Enter your second number: ";

		while (!(cin >> second_num)) {
			cout << "Input invalid, try again";
			exit(1);
		}

		switch (operand) {
		case '+':
			cout << first_num + second_num;
			break;
		case '-':
			cout << first_num - second_num;
			break;
		case '/':
			if (second_num == 0 || first_num == 0) {
				cout << "Cannot divide by zero, try again";
			}
			else
				cout << first_num / second_num;
			break;
		case'*':
			cout << first_num * second_num;
			break;
		default:
			cout << "The input entered was invalid, ";

		}

	

	return 0;
}