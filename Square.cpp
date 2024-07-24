// Square.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int i = 0;
    int square = 0;

    // Write a while loop here:

    while (i < 10) { //(i<=9)
        square = i * i;
        cout << i << "  " << square << "\n";
        i++;
        /*
        cout<<i<<"  "<<i*i<<"\n";
        i++;
        */
    }



    // Write a for loop here:
    for (int i = 99; i > 0; i--) {
        cout << i << " bottles of pop on the wall.\n";
        cout << "Take one down and pass it around.\n";
        cout << i - 1 << " bottles of pop on the wall.\n\n";
    }
    cout << "No more bottles of pop on the wall.\n";
    cout << "No more bottles of pop.\n";
    cout << "Go to the store and buy some more,\n";
    cout << "99 bottles of pop on the wall.\n";
}
