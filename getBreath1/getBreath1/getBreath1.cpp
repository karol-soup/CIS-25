

#include <iostream>
#include <string>
#include <unordered_map>
#include <map>
#include <chrono>
#include <thread>
#include <vector>
#include <fstream>
#include <ctime>
#include <cstdlib>
using namespace std;
using namespace std::chrono_literals;


shared_ptr<vector<string>> getQuotes() {
	fstream file;
	file.open("Quotes.txt", ios::in);
	string str;
	auto quotes = make_shared<vector<string>>();
	if (!file.is_open()) {
		cout << "File failed to open" << endl;
		
	}
	else {
		while (getline(file, str))
			//cout << str << endl;
			quotes->push_back(str);
		file.close();
	}
	return quotes;

}
void printQuotes(shared_ptr<vector<string>>quotes) {
	srand(time(0));
	int index = rand() % quotes->size();
	cout << quotes->at(index) << endl;
}

void countdown(int num) {
	this_thread::sleep_for(1s);// pause for 1 sec
	for (int i = num; i >= 1;i--) {
		cout << i << endl;
		this_thread::sleep_for(1s);//pause for 1 sec
	}
}

void timer(int cycles) {

	for (int i = 0;i < cycles;i++) {
		cout << "Breath in...4.." << endl;
		countdown(3);//counts down

		cout << "Hold...7.." << endl;
		countdown(6);

		cout << "Breath out...8.." << endl;
		countdown(7);

	}
}

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

Date getDate() {
	Date date;
	cout << "What is today date? (MM/DD/YYYY)\n";
	cin >> date;
	return date;
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


string getValidName() {
	string name;
	cout << "I'm getBreath what's your name?\n";
	while (true) {
		getline(cin, name);
		if (name.empty()) {
			cout << "Invalid input. Please try again.\n";
		}
		else if (name.length() > 35) {
			cout << "Name is exessivly long. No more than 35 character. Please try again.\n";
		}
		else {
			break;
		}
	}
	return name;
}

short int getCycle() {
	short int cycles;
	cout << "How many breathing cycles would you like to do today? \n";
	while (true) {
		cin >> cycles;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits <streamsize>::max(), '\n');
			cout << "Invalid input. Please try again. \n";
			
		}
		else if (cycles < 1 || cycles > 15) {
			cout << "Cycles entered must be between 1-15. \n";
			
		}
		else {
			break;
		}
	}
	return cycles;
}

Mood getMood() {
	short int mood;
	cout << "Using our scale 1-5, how are you feeling at the moment?\n"
		<< "(1 - Sad, 2 - Frustrated, 3 - Neutral, 4 - Happy, 5 - Calm)\n";
	while (true) {
		cin >> mood;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input. Please try again.\n";
		}
		else if (mood > 5 || mood < 1) {
			cout << "Input must be between 1-5. Please try again.\n";
		}
		else break;
	}
	
	return static_cast <Mood>(mood);
}

void beginBreathig(const UserInfo& user) {
	system("cls");
	auto quotes = getQuotes();
	printQuotes(quotes);
	timer(user.cycle);
	system("cls");
}

UserInfo getUserInfo() {
	UserInfo user;
	
	user.name = getValidName();//obtaining name

	user.date = getDate();// date

	user.cycle = getCycle();//amount of cycles
	user.before = getMood(); // mood before
	beginBreathig(user);//calling breathing timer
	user.after = getMood(); // mood after breathing

	return user; //returing all object atributes
}

void logUser(UserInfo& user) {
	fstream userLog; //creating file
	userLog.open("userLogs.dat",ios::out | ios::app | ios::binary); //opening file in input mode, and ensuring previos work isnt erased


	if (userLog.is_open()) {

		userLog.write(reinterpret_cast<char*>(&user), sizeof(UserInfo));
	
		userLog.close();
	}
	else {
		cout << "couldnt open file" << endl;
	}

	userLog.close();
}



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

	
	return 0;
}

