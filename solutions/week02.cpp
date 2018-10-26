// За VS 2017
// #include "pch.h"
#include<iostream>

using namespace std;

int main()
{
	// WEEK 02
	// TASK 00
	int numberLeft = 0, numberRight = 0, swp = -1;

	cout << "Enter number -> ";
	cin >> numberLeft;

	cout << "Enter number -> ";
	cin >> numberRight;

	// now we will swap two numbers
	swp = numberLeft;
	numberLeft = numberRight;
	numberRight = swp;

	cout << "First entered parameter -> " << numberLeft
		<< "\nSecond entered parameter -> " << numberRight << endl;

	// ----------------------------------------------------------
	// TASK 01
	// ----------------------------------------------------------
	int number = 0;
	cout << "Enter number -> ";
	cin >> number;

	bool check = (!(number % 2) && !(number % 3) && !(number % 5));
	cout << (check ? "\nDivide by 2, 3 and 5" : "The number does not fulfill the condition\n");

	// ----------------------------------------------------------
	// TASK 02
	// ----------------------------------------------------------
	int firstNumber = 0, secondNumber = 0;
	cout << "Enter two numbers -> ";
	cin >> firstNumber >> secondNumber;

	if (secondNumber % firstNumber == 0)
	{
		cout << "First entered number divide second one" << endl;
	}
	else
	{
		cout << "First entered number doesn't divide second one" << endl;
	}

	// ----------------------------------------------------------
	// TASK 03
	// ----------------------------------------------------------
	const float PI = 3.14;
	float radius = 0.0f;
	cout << "Enter radius -> ";
	cin >> radius;

	if (radius > 0)
	{
		cout << "Area -> " << PI * radius * radius << "\nCircumference " << 2 * PI * radius << endl;
	}
	else
	{
		cout << "Invalid data for circle radius" << endl;
	}

	// ----------------------------------------------------------
	// TASK 04 - will reuse parameter number from example 01
	// ----------------------------------------------------------
	cout << "Enter number -> ";
	cin >> number;

	int hundreds = number / 100, tens = number / 10 % 10, ones = number % 10;
	cout << "Numbers -> " << hundreds << ", " << tens << ", " << ones << ". Sum -> " << hundreds + tens + ones << endl;

	// ----------------------------------------------------------
	// TASK 05 - will reuse parameter number from example 01
	// ----------------------------------------------------------
	cout << "Enter number -> ";
	cin >> number;

	int thousands = number / 1000;
	hundreds = number / 100 % 10,
		tens = number % 100 / 10, ones = number % 10;
	cout << "Numbers -> " << thousands << ", " << hundreds << ", " << tens << ", " << ones << endl;

	cout << (thousands != hundreds && thousands != tens && thousands != ones && hundreds != tens && hundreds != ones
		&& tens != ones) << endl;

	// ----------------------------------------------------------
	// TASK 06
	// ----------------------------------------------------------
	int centerCoordinateX = 0, centerCoordinateY = 0, coordinateX = 0, coordinateY = 0;
	cout << "Enter radius -> ";
	cin >> radius;

	cout << "Center coordinates (x, y) -> ";
	cin >> centerCoordinateX >> centerCoordinateY;


	cout << "Point coordinates (x, y) -> ";
	cin >> coordinateX >> coordinateY;
	
	if ((coordinateX - centerCoordinateX) * (coordinateX - centerCoordinateX) +
		(coordinateY - centerCoordinateY) * (coordinateY - centerCoordinateY) <= radius * radius)
	{
		cout << "Inside" << endl;
	}
	else
	{
		cout << "Outside" << endl;
	}
	return 0;
}
