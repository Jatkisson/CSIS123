// Chapter Six Assignment - Problem 12
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

int calculateMean(int first, int second, int third, int fourth, int fifth);

double calculateStdDeviation(int first, int second, int third, int fourth, int fifth, int mean);

int main()
{
	//Declaring Variables

	int num1;
	int num2;
	int num3;
	int num4;
	int num5;
	int mean;
	double stdDeviation;

	//User input of variables

	cout << "Please enter 5 numbers with a space between each and press the return key: ";
	cin >> num1 >> num2 >> num3 >> num4 >> num5;
	cout << endl;

	//Running functions and assigning the returned values to the proper variables.
	
	mean = calculateMean(num1, num2, num3, num4, num5);

	stdDeviation = calculateStdDeviation(num1, num2, num3, num4, num5, mean);

	//Output

	cout << "The mean of these five numbers is " << mean << endl;
	cout << "The standard deviation of these five numbers is " << stdDeviation << endl;

	system("pause");

	return 0;
}

//Function that calculates the mean of five integers

int calculateMean(int first, int second, int third, int fourth, int fifth)
{	
	int mean;
	
	mean = (first + second + third + fourth + fifth) / 5;

	return mean;
}

//Function that calculates the standard deviation of five integers and also uses the above function that calculates the mean

double calculateStdDeviation(int first, int second, int third, int fourth, int fifth, int mean)
{
	//New double variables were required to print the standard deviation as a double
	//Without these variables, the stdDeviation variable would return an int value

	double stdDeviation;
	double stdFirst;
	double stdSecond;
	double stdThird;
	double stdFourth;
	double stdFifth;
	
	//External processing of the difference between the number and the mean for testing purposes
	//Two different processing areas made it easier to find flaws in the calculations

	stdFirst = pow((first - mean), 2);
	stdSecond = pow((second - mean), 2);
	stdThird = pow((third - mean), 2);
	stdFourth = pow((fourth - mean), 2);
	stdFifth = pow((fifth - mean), 2);

	//Since the standard deviation is the square root of the mean of the difference between the number and the mean, squared
	//This calculation was able to use the calculateMean function to simplify the program

	stdDeviation = sqrt(calculateMean(stdFirst, stdSecond, stdThird, stdFourth, stdFifth));

	return stdDeviation;
}