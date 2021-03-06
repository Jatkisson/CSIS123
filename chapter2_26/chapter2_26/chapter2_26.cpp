// Chapter Two Assignment - Problem 26
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{	//Declaring Variables

	int doorLength;							//Length of Door
	int doorWidth;							//Width of Door
	int firstWindowLength;					//Length of First Window
	int firstWindowWidth;					//Width of First Window
	int secondWindowLength;					//Length of Second Window
	int secondWindowWidth;					//Width of Second Window
	int bookshelfLength;					//Length of Bookshelf
	int bookshelfWidth;						//Width of Bookshelf
	int roomLength;							//Length of Room
	int roomWidth;							//Width of Room
	int roomHeight;							//Height of Room
	int squareFeetOfRoom;					//Square Feet of the Room Without Obstacles
	int squareFeetOfObstacles;				//Square Feet of the Obstacles of the Room
	int amountOfPaintNeeded;				//Amount of Paint Needed for the Wall

	//Processing

	//Inputting Variables

	cout << "Enter the length and width of the door in feet separated by one or more spaces and then press the return key ";
	cin >> doorLength >> doorWidth;
	cout << endl;

	cout << "Enter the length and width of the first window in feet separated by one or more spaces and then press the return key ";
	cin >> firstWindowLength >> firstWindowWidth;
	cout << endl;

	cout << "Enter the length and width of the second window in feet separated by one or more spaces and then press the return key ";
	cin >> secondWindowLength >> secondWindowWidth;
	cout << endl;

	cout << "Enter the length and width of the bookshelf in feet separated by one or more spaces and then press the return key ";
	cin >> bookshelfLength >> bookshelfWidth;
	cout << endl;

	cout << "Enter the length, width, and height of the room in feet separated by one or more spaces and then press the return key ";
	cin >> roomLength >> roomWidth >> roomHeight;
	cout << endl;

	//Calculates the Square Feet of the Walls
	squareFeetOfRoom = (roomLength * roomHeight * 2) + (roomWidth * roomHeight * 2);
	//Calculates the Square Feet of the Obstacles in the room
	squareFeetOfObstacles = (doorLength * doorLength) + (firstWindowLength * firstWindowWidth)
		+ (secondWindowLength * secondWindowLength) + (bookshelfLength * bookshelfLength);
	//Calculates the Amount of Paint Needed to Cover the Walls
	amountOfPaintNeeded = (squareFeetOfRoom - squareFeetOfObstacles) / 120;

	//Final Output
	cout << amountOfPaintNeeded << " gallons of paint are needed to paint the walls of this room" << endl;

	system("pause");

	return 0;
}