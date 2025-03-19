#pragma once

#include <iostream>
#include <string>

using namespace std;

namespace getval {
	struct Address {
		string street;
		string city;
		int zipCode = 0;

	};

	struct Customer {
		string name;
		string email;
		Address address; //nested  address structure within customer

	};
	 
	string getName();
	string getEmail();
	Address getAddress();

}