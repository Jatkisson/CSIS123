// Chapter 3 Assignment - Problem 10

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	//Declaring variables

	int lengthOfTheYard;
	int radiusOfTree;
	int spaceBetweenTrees;
	int numberOfTreesToPlant;
	int totalSpaceOccupied;

	//User input of variables

	cout << "Enter the length of your yard that is available for tree planting as a whole number and press the return key: " << endl;
	cin >> lengthOfTheYard;
	cout << endl;

	cout << "Enter the radius of the fully grown tree as a whole number and press the return key: " << endl;
	cin >> radiusOfTree;
	cout << endl;

	cout << "Enter the required space between the fully grown trees as a whole number and press the return key: " << endl;
	cin >> spaceBetweenTrees;
	cout << endl;

	//Processing
	//The number of trees to plant equals the lenght of the yard divided by the diameter (radius times 2) of each tree plus the space required on each side of the tree
	//Any fraction of space left over will be disregarded

	numberOfTreesToPlant = lengthOfTheYard / (2 * radiusOfTree + 2 * spaceBetweenTrees);
	totalSpaceOccupied = numberOfTreesToPlant * (2 * radiusOfTree);

	//Output

	cout << "You have enough space to plant " << numberOfTreesToPlant << " trees across your yard" << endl;
	system("pause");

	return 0;
}


