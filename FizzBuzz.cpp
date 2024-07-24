// FizzBuzz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

	
	for ( int i=1; i<=100; i++)

	{
	//how really is
	if (i%15==0)
		{
			cout << "\n\tFizzBuzz!\n";
		}
		else if (i%5==0)
		{
			cout << "\n\tBUZZ!\n";
		}
		else if ( i % 3 == 0)
		{
			cout << "\n\tFIZZ!\n";
		}
		else
		{
			cout << "\n\t" << i << "\n";
		}
		
	}


	/* how I thought it was
 	if (i == m3)
		{
			cout << "\n\tFIZZ!\n";
		}
		else if (i==m5)
		{
			cout << "\n\tBUZZ!\n";
		}
		else if (i==m35)
		{
			cout << "\n\tFizzBuzz!\n";
		}
		else
		{
			cout << "\n\t" << i << "\n";
		}
		*/
}

