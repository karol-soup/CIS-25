#pragma once
#include <iostream>
#include <string>
using namespace std;
namespace moo {
	struct  Date {
		short releaseYear;
		short releaseMonth;
		short releaseDay;
	};


	struct Movie {
		string title;
		Date releaseDate;
		bool isPopular = false;
	};

	Date getDate();
	bool getYesOrNo();
	string getTitle();
	Movie initialize();
	ostream& operator <<(ostream& COUT, const Movie& movie);
}
