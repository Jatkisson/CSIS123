﻿// Chapter Three Assignment - Problem 11
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

	double candyLength;
	double candyWidth;
	int candyHeight;
	double candyVolume;
	int percentReduction;
	double newCandyLength;
	double newCandyWidth;

	//User input of variables

	cout << fixed << showpoint;
	cout << setprecision(2);

	cout << "Enter the length of the current candy bar and press the return key: " << endl;
	cin >> candyLength;
	cout << endl;

	cout << "Enter the width of the current candy bar and press the return key: " << endl;
	cin >> candyWidth;
	cout << endl;

	cout << "Enter the height of the current candy bar and press the return key: " << endl;
	cin >> candyHeight;
	cout << endl;

	cout << "Enter the pecentage of change desired for the new candy bar and press the return key: " << endl;
	cin >> percentReduction;
	cout << endl;

	//Processing
	//Finds the amount that is decreased from the length and width by splitting the percent reduction in two
	//and calculating that percentage change for length and width.

	newCandyLength = candyLength * (sqrt(1 - percentReduction / 100));
	newCandyWidth = candyWidth * (sqrt(1 - percentReduction / 100));

	//Output

	cout << "The new candy bar will be " << newCandyLength << " inches long, " <<
		newCandyWidth << " inches wide and will remain " << candyHeight << " inches tall." << endl;
	
	system("pause");

    return 0;
}

