/*
create a structure for address:
street
city
zipCode
nested the address structure within customer
create and initialize a customer object



Note: user validation is a must

*/

#include <iostream>
#include <string>
#include "getValidation.h"
using namespace std;



int main()
{
	getval:: Customer customer1;

	customer1.name = getval::getName();
	customer1.email = getval::getEmail();
	customer1.address = getval::getAddress();

	cout << customer1.name << endl;
	cout << customer1.email << endl;
	cout << customer1.address.street << endl;
	cout << customer1.address.city << endl;
	cout << customer1.address.zipCode << endl;

	return 0;
}
