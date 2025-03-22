
#include <iostream>
#include <string>
#include "forMovie.h"

using namespace std;

namespace moo{

	Date getDate() {
		Date date;
		short year, month, day;

		while (true) {
			cout << "Enter the movie release year: " << endl;
			cin >> year;
			if (cin.fail()) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Invalid input" << endl;
			}
			else break;
		}
		while (true) {
			cout << "Enter the movie release month: " << endl;
			cin >> month;
			if (cin.fail()) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Invalid input" << endl;
			}
			else break;
		}
		while (true) {
			cout << "Enter the movie release day: " << endl;
			cin >> day;
			if (cin.fail()) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Invalid input" << endl;
			}
			else break;
		}

		date.releaseYear = year;
		date.releaseMonth = month;
		date.releaseDay = day;

		return date;
	}

	bool getYesOrNo() {
		char choice;
		bool isPopular = false;
		cout << "Is your movie popular: " << endl;
		while (true) {
			cout << "Enter y for yes or n for no" << endl;
			cin >> choice;
			choice = tolower(choice);
			if (choice == 'y' || choice == 'n') {
				(choice == 'y') ? isPopular = true : isPopular = false;
				break;
			}
			else {
				cout << "Invalid input";
			}
		}
		return isPopular;
	}

	string getTitle() {
		string title;
		while (true) {
			cout << "Enter a movie title: " << endl;
			getline(cin, title);
			if (title.empty()) {
				cin.clear();
				cout << "Invalid input" << endl;
			}
			else break;
		}
		return title;
	}

	Movie initialize() {

		Movie movie;
		movie.title = getTitle();
		movie.releaseDate = getDate();
		movie.isPopular = getYesOrNo();

		return movie;
	}


	ostream& operator <<(ostream& COUT, const Movie& movie) {
		COUT << "Title: " << movie.title << endl;
		COUT << "Release Date: " << movie.releaseDate.releaseYear << "-"
			<< movie.releaseDate.releaseMonth << "-"
			<< movie.releaseDate.releaseDay << endl;
		COUT << "Is it popular: " << (movie.isPopular ? "yes" : "no") << endl;
		return COUT;
	}
}