

#include <iostream>
#include "include/beginBreathing.h"
#include "include/countdown.h"
#include "include/Date.h"
#include "include/getCycle.h"
#include "include/getDate.h"
#include "include/getMood.h"
#include "include/getQuotes.h"
#include "include/getSummary.h"
#include "include/getUserInfo.h"
#include "include/getValidName.h"
#include "include/logUser.h"
#include "include/Mood.h"
#include "include/printQuotes.h"
#include "include/timer.h"
#include "include/UserInfo.h"
#include <map>

using namespace std;


int main()
{
	map<Mood, string> moodMap{
		{Sad, "Sad"},
		{Frustrated, "Frustrated"},
		{Neutral, "Neutral"},
		{Happy, "Happy"},
		{Calm, "Calm"}
	};

	UserInfo user;

	user = getUserInfo();

	cout << "You entered: " << user.name<<endl;
	cout << "You entered: " << user.date<<endl;
	cout << "You entered: " << user.cycle<<endl;
	cout << "You entered: " << moodMap[user.before]<<endl;
	cout << "You entered: " << moodMap[user.after] << endl;


	logUser(user);

	getSummary("userLogs.dat", moodMap);
	
	return 0;
}

