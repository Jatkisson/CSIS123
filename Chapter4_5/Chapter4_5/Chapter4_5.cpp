// Chapter Four Assignment - Problem 5
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
	double sideA, sideB, sideC;

	//User input of variables
	cout << "Enter the length of side A of the triangle and press the return key: ";
	cin >> sideA;
	cout << endl;

	cout << "Enter the length of side B of the triangle and press the return key: ";
	cin >> sideB;
	cout << endl;

	cout << "Enter the length of side C of the triangle and press the return key: ";
	cin >> sideC;
	cout << endl;

	//Processing & Output
	//

	if ((pow(sideA, 2) == pow(sideB, 2) + pow(sideC, 2)) || (pow(sideB, 2) == pow(sideA, 2) + pow(sideC, 2)) || (pow(sideC, 2) == pow(sideA, 2) + pow(sideB, 2)))
		cout << "This is a right triangle!" << endl;
	else
		cout << "This is not a right triangle..." << endl;
	


	system("pause");

	return 0;
}