// RPSLS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

 /*Scissors cuts Paper.
Paper covers Rock.
Rock crushes Lizard.
Lizard poisons Spock.
Spock smashes Scissors.
Scissors decapitate Lizard.
Lizard eats Paper.
Paper disproves Spock.
Spock vaporizes Rock.
(and as it always has) Rock crushes Scissors.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

	srand(time(NULL));
	int computer = rand() % 5 + 1;
	int user = 0;

	cout << "================================\n";
	cout << "ROCK-PAPER-SCISSORS-LIZARD-SPOCK\n";
	cout << "================================\n";

	cout << "\n1) ROCK\n";
	cout << "\n2) PAPER\n";
	cout << "\n3) SCISSORS\n";
	cout << "\n4) LIZARD\n";
	cout << "\n5) SPOCK\n";

	cout << "\n\tSHOOT!\n\t\t";
	cin >> user;

	if (user == 1) {
		cout << "User's Rock\n";
	}
	else if (user == 2)
	{
		cout << "User's Paper\n";
	}
	else if (user == 3)
	{
		cout << "User's Scissors\n";
	}
	else if (user == 4)
	{
		cout << "User's Lizard\n";
	}
	else if (user == 5)
	{
		cout << "User's Spock\n";
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
	else if (computer == 3)
	{
		cout << "PC's Scissors\n";
	}
	else if (computer == 4)
	{
		cout << "PC's Lizard\n";
	}
	else
	{
		cout << "PC's Spock\n";
	}

	if (computer == user)
	{
		cout << "It's a tie... Try Again!\n";
	}
	else if (computer == 1 && user == 2)
	{
		cout << "Paper Covers Rock! You Win!\n";
	}
	else if (computer == 1 && user == 3)
	{
		cout << "Rock Crushes Scissors! You Lost!\n";
	}
	else if (computer == 1 && user == 4)
	{
		cout << "Rock Crushes Lizard! You Lost!\n";		
	}
	else if (computer == 1 && user == 5)
	{
		cout << "Spock Vaporizes Rock! You Win!\n";
	}
	else if (computer == 2 && user == 1)
	{
		cout << "Paper Covers Rock! You Lost!\n";
	}
	else if (computer == 2 && user == 3)
	{
		cout << "Scissors Cuts Paper! You WIN!\n";
	}
	else if (computer == 2 && user == 4)
	{
		cout << "Lizard Eats Paper! You WIN!\n";
	}
	else if (computer == 2 && user == 5)
	{
		cout << "Paper Disproves Spock! You LOST!\n";
	}
	else if (computer == 3 && user == 1)
	{
		cout << "Rock crushes Scissors! You WIN!\n";
	}
	else if (computer == 3 && user == 2)
	{
		cout << "Scissors Cuts Paper! You LOST!\n";
	}
	else if (computer == 3 && user == 4)
	{
		cout << "Scissors Decapitate Lizard! You LOST!\n";
	}
	else if (computer == 3 && user == 5)
	{
		cout << "Spock Smashes Scissors! You WIN!\n";
	}
	else if (computer == 4 && user == 1)
	{
		cout << "Rock Crushes Lizard! You WIN!\n";
	}
	else if (computer == 4 && user == 2)
	{
		cout << "Lizard Eats Paper! You LOST!\n";
	}
	else if (computer == 4 && user == 3)
	{
		cout << "Scissors Decapitate Lizard! You WIN!\n";
	}
	else if (computer == 4 && user == 5)
	{
		cout << "Lizard Poisons Spock! You LOST!\n";
	}
	else if (computer == 5 && user == 1)
	{
		cout << "Spock Vaporizes Rock! You LOST!\n";
	}
	else if (computer == 5 && user == 2)
	{
		cout << "Paper disproves Spock! You WIN!\n";
	}
	else if (computer == 5 && user == 3)
	{
		cout << "Spock smashes Scissors! You LOST!\n";
	}
	else if (computer == 5 && user == 4)
	{
		cout << "Lizard Poisons Spock! You WIN!\n";
	}
	else
	{
		cout << "Invalid Input... Try Again!\n";
	}
}


