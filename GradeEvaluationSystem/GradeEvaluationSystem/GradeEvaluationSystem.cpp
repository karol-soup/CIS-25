// take int score, use if else, output fail
//
#include <iostream>
using namespace std; 

int main()
{
	int score;

	cout << "Enter your score: ";
	cin >> score;
	
	if (score < 60) {
		cout << "Fail";
	}
	else if (score >= 60 && score <= 69) {
		cout << "Pass";
	}
	else if (score >= 70 && score <= 89) {
		cout << "Good";
	}
	else {
		cout << "Excellent!";
	}

	return 0;
}
