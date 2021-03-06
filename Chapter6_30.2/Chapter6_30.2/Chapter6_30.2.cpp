// Chapter Six Assignment - Problem 30
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
#include <cstdlib>

using namespace std;

const int FEET_PER_MILE = 5280;

double simpleRoute(double landFeet, double waterFeet, double lCost, double wCost);
double bestRoute(double landFeet, double waterFeet, double lCost, double wCost);
double underWaterLine(double landFeet, double waterFeet, double lCost, double wCost);
double overLandLine(double landFeet, double waterFeet, double lCost, double wCost);

int main()
{
	//Declaring Variables
	double landMiles;
	double waterMiles;
	double landFeet;
	double waterFeet;
	double landCost;
	double waterCost;



	//User input of variables
	cout << "Enter the distance across the river in miles down to at least two decimal places and press the return key: ";
	cin >> waterMiles;
	cout << endl;

	cout << "Enter the distance down the river on land, in miles, down to at least two decimal places and press the return key: ";
	cin >> landMiles;
	cout << endl;

	cout << "Enter the cost of laying the power line under water per foot and press the return key: ";
	cin >> waterCost;
	cout << endl;

	cout << "Enter the cost of laying the power line over land per foot and press the return key: ";
	cin >> landCost;
	cout << endl;

	landFeet = waterMiles * FEET_PER_MILE;
	waterFeet = waterMiles * FEET_PER_MILE;

	//Output
	cout << fixed << showpoint << setprecision(2);
	cout << "The best possible cost for constructing this power line is $" << bestRoute(landFeet, waterFeet, landCost, waterCost) << endl;
	cout << setprecision(0);
	cout << "The best amount of power line to run under water is " << underWaterLine(landFeet, waterFeet, landCost, waterCost) << " feet" << endl;
	cout << "The best amount of power line to run over land is " << overLandLine(landFeet, waterFeet, landCost, waterCost) << " feet" << endl;

	system("pause");

	return 0;
}


//Calculation of the cost of the route in its simplest form (directly up the land and directly across the river)
//
double simpleRoute(double landFeet, double waterFeet, double lCost, double wCost)
{
	double simpleCost;

		simpleCost = (landFeet * lCost) + (waterFeet * wCost);

	return simpleCost;
}

//Best Route Calculation Function
//Calculates the different costs of crossing the river from crossing the river directly to incremently moving the landing point across the river one foot closer to the factory
//Whenever a lower cost point is found, the function should save the new, lower cost

double bestRoute(double landFeet, double waterFeet, double lCost, double wCost)
{
	int landLength;
	int waterLength;
	int landCounter = 0;
	int waterCounter = 0;
	double cost;
	double simpleCost;
	double newCost;
	double bestCost;

	simpleCost = simpleRoute(landFeet, waterFeet, lCost, wCost);

	do
	{
		newCost = (((landFeet - landCounter) * lCost) + ((sqrt(pow(waterFeet, 2)) + pow(waterCounter, 2)) * wCost));
		landCounter++;
		waterCounter++;
		if (newCost <= simpleCost) {
			bestCost = newCost;
			//landLength = landFeet - landCounter;
			//waterLength = (sqrt(pow(waterFeet, 2)) + pow(waterCounter, 2));
		}
	} while (landCounter <= landFeet);

	return bestCost;

	return 0;
}

double overLandLine(double landFeet, double waterFeet, double lCost, double wCost)
{
	int landLength;
	int waterLength;
	int landCounter = 0;
	int waterCounter = 0;
	double cost;
	double simpleCost;
	double newCost;
	double bestCost;

	simpleCost = simpleRoute(landFeet, waterFeet, lCost, wCost);

	do
	{
		newCost = (((landFeet - landCounter) * lCost) + ((sqrt(pow(waterFeet, 2)) + pow(waterCounter, 2)) * wCost));
		landCounter++;
		waterCounter++;
		if (newCost <= simpleCost) {
			//bestCost = newCost;
			landLength = landFeet - landCounter;
			//waterLength = (sqrt(pow(waterFeet, 2)) + pow(waterCounter, 2));
		}
	} while (landCounter <= landFeet);

	return landLength;

	return 0;
}

double underWaterLine(double landFeet, double waterFeet, double lCost, double wCost)
{
	int landLength;
	int waterLength;
	int landCounter = 0;
	int waterCounter = 0;
	double cost;
	double simpleCost;
	double newCost;
	double bestCost;

	simpleCost = simpleRoute(landFeet, waterFeet, lCost, wCost);

	do
	{
		newCost = (((landFeet - landCounter) * lCost) + ((sqrt(pow(waterFeet, 2)) + pow(waterCounter, 2)) * wCost));
		landCounter++;
		waterCounter++;
		if (newCost <= simpleCost) {
			//bestCost = newCost;
			//landLength = landFeet - landCounter;
			waterLength = (sqrt(pow(waterFeet, 2)) + pow(waterCounter, 2));
		}
	} while (landCounter <= landFeet);

	return waterLength;

	return 0;
}