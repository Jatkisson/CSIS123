// Chapter Two Assignment - Problem 7
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{	//Declaring Variables

	double number;

	//Inputting Variable

	cout << "Enter a decimal number and press the return key: ";
	cin >> number;
	cout << endl;

	//Output

	cout << "The integer nearest to " << number << " = " << static_cast<int>(number + 0.5) << endl;
	
	system("pause");

	return 0;
}