

#include <iostream>
#include <cmath>
using namespace std;

int main() {


	double first_num;
	double second_num;
	char operand;
	int i = 0;

	


		cout << "Enter the operation you would like to use (Please enter one of the following, +, -, /, *): ";
		cin >> operand;


		cout << endl << "Enter your first number: ";
		cin >> first_num;
		cout << "Enter your second number: ";
		cin >> second_num;

		switch (operand) {
		case '+':
			cout << first_num + second_num;
			break;
		case '-':
			cout << first_num - second_num;
			break;
		case '/':
			cout << first_num / second_num;
			break;
		case'*':
			cout << first_num * second_num;
			break;
		default:
			cout << "The input entered was invalid";

		}

	

	return 0;
}