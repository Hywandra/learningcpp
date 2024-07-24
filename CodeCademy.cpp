// CodeCademy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*Paper convers Rock
Rock smashes scissors
Scissors cuts paper*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

	srand(time(NULL));
	int computer = rand() % 3+1;
	int user = 0;

	cout << "=======================\n";
	cout << "ROCK   PAPER   SCISSORS\n";
	cout << "=======================\n";

	cout << "\n1) ROCK\n";
	cout << "\n2) PAPER\n";
	cout << "\n3) SCISSORS\n";

	cout << "\n\tSHOOT!\n\t\t";
	cin >> user;

	if (user == 1) {
		cout << "User's Rock\n";
		}
	else if (user==2)
	{
		cout << "User's Paper\n";
	}
	else if (user==3)
	{
		cout << "User's Scissors\n";
	}
	else
	{
		cout << "Invalid\n";
	}
	if (computer == 1) {
		cout << "PC's Rock\n";
	}
	else if (computer == 2)
	{
		cout << "PC's Paper\n";
	}
	else
	{
		cout << "PC's Scissors\n";
	}
		
	if (computer==user)
	{
		cout << "It's a tie... Try Again!\n";
	}
	else if (computer==1&&user==2)
	{
		cout << "Paper Covers Rock! You Win!\n";
	}
	else if (computer == 1 && user == 3)
	{
		cout << "Rock Crushes Scissors! You Lost!\n";
	}
	else if (computer == 2 && user == 3)
	{
		cout << "Scissors Cuts Paper! You WIN!\n";
	}
	else if (user == 1 && computer == 2)
	{
		cout << "Paper Covers Rock! You Lost!\n";
	}
	else if (user == 1 && computer == 3)
	{
		cout << "Rock Crushes Scissors! You Win!\n";
	}
	else if (user == 2 && computer == 3)
	{
		cout << "Scissors Cuts Paper! You Lost!\n";
	}
	else
	{
		cout << "Invalid Input... Try Again!\n";
	}

}

