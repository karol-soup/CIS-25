
#include<iostream>
#include<vector>
#include<cstdlib>
#include"highestTempRead.h"
#include"getSize.h"
#include"getTemps.h"
#include"displayTemps.h"
#include"getWindow.h"
using namespace std;

int main() {

	int size = namic::getSize();
	int* tempertures; //pointer will hold array
	tempertures = new int[size]; //created an array using dma creatingan array sized by user

	namic::getTemps(tempertures, size);// will get elements of array

	system("cls");//to clear the output bc it looked ugly

	namic::displayTemps(tempertures, size);

	int windowSize = namic::getWindow(size);

	namic::highestTempRead(tempertures, size, windowSize);

		delete[] tempertures;
		tempertures = nullptr;// no memory leak in this program!

	return 0;
}




