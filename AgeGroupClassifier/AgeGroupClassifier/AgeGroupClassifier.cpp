

#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age < 12) {
        cout << "Child";
    }
    else if (age >= 12 && age <= 19) {
        cout << "Teen";
    }
    else if (age >= 20 && age <= 64) {
        cout << "Adult";
    }
    else
        cout << "Senior";

    return 0;
}


