// hdgjklhdfjk.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double made;

    double commission;

        if (made < 10000) {
            commission = made * .10;
        }
        else if  (made > 10000 && made <= 15000) {
            commission = made * .15;
        }
        else  (made > 15000) {
            commission = made * .20;
        }



       bool usCitizen = true;
       int tuition;
       bool caResident = true;
      


       if (usCitizen) {
           if (caResident) {
               tuition = 0;
           }
           else{
               tuition = 1000;
           }
       }
       else {
           tuition = 3000;
       }



        return 0;

}

