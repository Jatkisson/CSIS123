// Chapter Two Assignment - Problem 28
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

const double CALORIES_NUTS_TO_FRUITS = 0.70; 

int main()
{	//Declaring Variables

	int numberOfStudents;
	double numberOfCaloriesNeeded;
	double numberOfCaloriesNuts;
	double numberOfCaloriesFruits;
	double poundsNeeded;
	double totalPounds;

	//Processing

	cout << "Enter the number of students in the school and then press the return key ";
	cin >> numberOfStudents ;
	cout << endl;

	cout << "Enter the number of calories each students needs in a day and then press the return key ";
	cin >> numberOfCaloriesNeeded;
	cout << endl;

	cout << "Enter the number of calories in each pound of nuts and then press the return key ";
	cin >> numberOfCaloriesNuts;
	cout << endl;

	//Calculates the calories for a pound of dried fruits
	numberOfCaloriesFruits = numberOfCaloriesNuts * CALORIES_NUTS_TO_FRUITS;
	//Calculates the pounds of dried fruits needed for the student's meals
	poundsNeeded = numberOfCaloriesNeeded / (numberOfCaloriesFruits + numberOfCaloriesNuts);
	//Calculates the total amount needed for all students
	totalPounds = poundsNeeded * numberOfStudents;

	//Final Output
	cout << totalPounds << " pound(s) of nuts and dried fruits are needed for each student's lunch." << endl;
	cout << "That equals " << poundsNeeded << " pound(s) per student.";

	system("pause");

	return 0;
}