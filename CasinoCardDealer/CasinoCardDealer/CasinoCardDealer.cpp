

#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

string getRandomCard();

int main()
{
	for (int i = 0; i < 40; i++) {
		cout << "*";
	}
	cout << endl << endl;

	cout << "* Casino Card:----------" << getRandomCard() <<" *" << endl;

	cout << endl << endl;
	for (int i = 0; i < 40; i++) {
		cout << "*";
	}

}

string getRandomCard() {

	string ranks[]{ "Ace","2","3","4","5","6","7","8","9","10","Jack","Queen","King" };//assuming we are not using jokers
	string suits[]{ "Clubs","Hearts","Spades","Diamonds" };

	srand(time(0));

	int ranRank = rand() % 13;//when we do mod we ensure it is within the range e.g 452 % 13 = 10
	int ranSuit = rand() % 4; //

	return ranks[ranRank] + " of " + suits[ranSuit];
}
