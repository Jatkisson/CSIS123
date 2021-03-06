// Chapter Five Assignment - Problem 28
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	//Declaring Variables
	int units;
	int rent;
	int increase;
	int maintanence;
	int newProfits;
	int profits;
	int i;
	int idealNumber;

	newProfits = 0;

	//User input of variables

	cout << "Enter the total number of units in the apartment complex and press the return key: ";
	cin >> units;
	cout << endl;
	cout << "Enter the amount of the rent for each in unit and press the return key: ";
	cin >> rent;
	cout << endl;
	cout << "Enter the increase in rent that results in a vacant unit and press the return key: ";
	cin >> increase;
	cout << endl;
	cout << "Enter the amount of money required to maintain each unit and press the return key: ";
	cin >> maintanence;
	cout << endl;

	//Processing
	//This for loop is designed to run through every scenario of the increase in rent
	//Every time a new maximum profit amount is determined, the program saves the amount of the profits and the number of units rented

	for (i = 0; i <= units; i++)
	{
		profits = (units - i) * (rent + (i * increase) - maintanence);
	if (profits >= newProfits)
	{
		newProfits = profits;
		idealNumber = units - i;
	}
	}

	//Output

	cout << "You should have " << idealNumber << " units rented in your complex to maximize profits." << endl;
	cout << "This would give you a total profit of $" << newProfits << endl;

	system("pause");

	return 0;
}