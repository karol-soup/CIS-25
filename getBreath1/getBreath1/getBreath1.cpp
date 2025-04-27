

#include <iostream>
using namespace std;

struct Date {
	short int month;
	short int day;
	short int year;
};
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
int main()
{
	cout << "i am getBreath, what's your name?" << endl;
	return 0;
}
