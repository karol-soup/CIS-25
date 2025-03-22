// classActivity09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "forMovie.h"
using namespace std;



int main() {
	moo::Movie movie = moo::initialize();

	cout << movie;

	return 0;
}

