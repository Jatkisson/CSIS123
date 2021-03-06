// Chapter Three Assignment - Problem 12
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

	double westCarSpeed;
	double westCarDistance;
	double southCarSpeed;
	double southCarDistance;
	int elapsedTimeHours;
	int elapsedTimeMinutes;
	int elapsedTime;
	int distance;

	//User input of variables

	cout << "Enter the speed of the car going west in miles per hour and press the return key: " << endl;
	cin >> westCarSpeed;
	cout << endl;

	cout << "Enter the speed of the car going south in miles per hour and press the return key: " << endl;
	cin >> southCarSpeed;
	cout << endl;

	cout << "Enter the elapsed time of travel for both vehicles in hours and press the return key: " << endl;
	cin >> elapsedTimeHours;
	cout << endl;

	cout << "Enter the elapsed time of travel for both vehicles in minutes and press the return key: " << endl;
	cin >> elapsedTimeMinutes;
	cout << endl;

	//Processing
	//Finds the elapsed time in minutes and then calculates the distance traveled by each vehicle
	//Calculates the distance between these two vehicles at the end of the elapsed time by
	//taking the square root of both distances once they have been squared and added together.

	elapsedTime = elapsedTimeHours * 60 + elapsedTimeMinutes;
	westCarDistance = westCarSpeed / 60 * elapsedTime;
	southCarDistance = southCarSpeed / 60 * elapsedTime;
	distance = sqrt(pow(westCarDistance, 2) + pow(southCarDistance, 2));

	//Output

	cout << "The car headed west will be " << distance << " miles away from the car headed south after " <<
		elapsedTimeHours << " hours and " << elapsedTimeMinutes << " minutes of travel time." << endl;

	system("pause");

	return 0;
}

