#include <iostream>
#include <cstdlib>
#include<iomanip>
#include <string>
#include <ctime>
using namespace std;

string getRandomCard();

int main()
{

	srand(time(0));

	cout << setfill('*') << setw(40)<<" " << endl << endl;

	cout << left << setw(11) << "Casino Card:"<< setfill('-') //setfill to reset the fill characters
		<< setfill('-')<<right<< setw(29)<< getRandomCard();

	cout <<endl<< endl << setfill('*') << setw(40) << " ";

}

string getRandomCard() {

	string ranks[]{ "Ace","2","3","4","5","6","7","8","9","10","Jack","Queen","King" };//assuming we are not using jokers
	string suits[]{ "Clubs","Hearts","Spades","Diamonds" };


	int ranRank = rand() % 13;//when we do mod we ensure it is within the range e.g 452 % 13 = 10
	int ranSuit = rand() % 4; //

	return ranks[ranRank] + " of " + suits[ranSuit];
}