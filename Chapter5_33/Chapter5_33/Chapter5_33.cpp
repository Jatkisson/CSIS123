// Chapter Five Assignment - Problem 33
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
	int dish;
	int nextDish;
	int minutesLonger;
	int time;
	int runningTime;
	int i;
	

	//User input of variables

	cout << "Enter the  number of minutes to prepare the first dish and press the return key: ";
	cin >> dish;
	cout << endl;
	cout << "Enter the number of minutes longer it will take in comarison to the first dish and press the return key: ";
	cin >> minutesLonger;
	cout << endl;
	cout << "Enter the time available to prepare the dishes and press the return key: ";
	cin >> time;
	cout << endl;
	

	//Processing
	//
	if (dish > time)
		cout << "There is not enough time for a single dish." << endl;
	else
	{
		i = 1;
		do 
		{
			nextDish = dish + minutesLonger;
			runningTime = dish + nextDish;
			i++;
			dish = nextDish;
		} while (runningTime <= time);
	}

	//Output

	cout << "You should have " << i << " dishes prepared." << endl;
	cout << "This would take you " << runningTime << " minutes to prepare." << endl;

	system("pause");

	return 0;
}