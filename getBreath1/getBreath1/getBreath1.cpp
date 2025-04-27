

#include <iostream>
using namespace std;

struct Date {
	short int month;
	short int day;
	short int year;
};
istream& operator>>(istream& input, Date& date) {// will manipulate how we recive input
	char slash;
	while (true) {
		input >> date.month >> slash >> date.day >> slash >> date.year;
		if (input.fail()) {
			cout << "Invalid date input. Please try again\n";
			input.clear(); // will clear error
			input.ignore(numeric_limits<streamsize>::max(), '\n');// will discard
		}
		else if (date.month < 0 || date.month > 13) {
			cout << "Month must be between 1-12. Please try again.\n";
		}
		else if (date.day < 0 || date.day > 32) {
			cout << "Day must be between 1-32. Please try again.\n";
		}
		else if (date.year < 2000 || date.year>3000) {
			cout << "Year must be between 2000-3000. Please try again.\n";
		}
		else break;
	}
	if (slash != '/') {
		input.setstate(ios::failbit);//converts char input to slash
	}
	return input;
}
ostream& operator<<(ostream& output, Date& date) {
	char slash = '/';
	output << date.month << slash << date.day << slash << date.year;

	return output;
}

enum Mood {
	Sad = 1,
	Frustrated,
	Neutral,
	Happy,
	Calm
};
struct UserInfo {
	string name;
	Date date;
	short int cycle;
	Mood before;
	Mood after;
};
Date getDate() {
	Date date;
	cout << "What is today date? (MM/DD/YYYY)\n";
	cin >> date;
	return date;
}
int main()
{
	UserInfo user;
	user.date = getDate();
	cout << "You entered: " << user.date;

	return 0;
}
