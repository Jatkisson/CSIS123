// Chapter Six Assignment - Problem 2
//

#include "stdafx.h"
#include <iostream>

using namespace std;

bool isVowel(char ch);

int main()
{
	//Declaring Variable
	char ch;

	//User Input of Variable
	cout << "Enter a character: ";
	cin >> ch;
	cout << endl;

	//Output
	cout << ch << " is a vowel: " << isVowel(ch) << endl;
	system("pause");

    return 0;
}

//Function determines whether or not the character is a vowel

bool isVowel(char ch)
{
	switch (ch)
	{
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		return true;
	default:
		return false;
	}
}