// Chapter Four Assignment - Problem 2
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
	double num1, num2, num3;
	double temp;	

	//User input of variables
	cout << "Enter three numbers with a space between each and press the return key: ";
	cin >> num1 >> num2 >> num3;
	cout << endl;	

	//Processing
	//
	if (num1 > num2)
	{
		temp = num1;
		num1 = num2;
		num2 = temp;
	}

	//Output
	cout << "The numbers in the ascending order are: ";

	if (num3 <= num1)
		cout << num3 << " " << num1 << " " << num2 << endl;
	else if (num1 <= num3 && num3 <= num2)
		cout << num1 << " " << num3 << " " << num2 << endl;
	else 
		cout << num1 << " " << num2 << " " << num3 << endl;

	system("pause");

	return 0;
}