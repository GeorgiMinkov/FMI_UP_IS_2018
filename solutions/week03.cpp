// #include "pch.h"
#include<iostream>

using namespace std;

int main()
{
	// WEEK 03
	// ----------------------------------------------------------
	// TASK 00
	// ----------------------------------------------------------
	int number = 0;
	cout << "Enter number -> ";
	cin >> number;

	cout << (number % 2 == 0 ? "Even" : "Odd") << endl;

	// ----------------------------------------------------------
	// TASK 01
	// ----------------------------------------------------------
	int year = 0;
	cout << "Enter year -> ";
	cin >> year;

	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				cout << year << " is a leap year.";
			}
			else
			{
				cout << year << " is not a leap year.";
			}
		}
		else
		{
			cout << year << " is a leap year.";
		}
	}
	else
	{
		cout << year << " is not a leap year.";
	}

	// ----------------------------------------------------------
	// TASK 02
	// ----------------------------------------------------------
	float coefA = 0, coefB = 0, coefC = 0,
		x1 = 0, x2 = 0, discriminant = 0, realPart = 0, imaginaryPart = 0;
	cout << "Enter coefficients a, b and c: ";
	cin >> coefA >> coefB >> coefC;

	discriminant = coefB * coefB - 4 * coefA * coefC;

	if (discriminant > 0) 
	{
		x1 = (-coefB + sqrt(discriminant)) / (2 * coefA);
		x2 = (-coefB - sqrt(discriminant)) / (2 * coefA);
		cout << "Roots are real and different." << endl;
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}

	else if (discriminant == 0) 
	{
		cout << "Roots are real and same." << endl;
		x1 = (-coefB + sqrt(discriminant)) / (2 * coefA);
		cout << "x1 and x2 = " << x1 << endl;
	}
	else 
	{
		realPart = -coefB / (2 * coefA);
		imaginaryPart = sqrt(-discriminant) / (2 * coefA);
		cout << "Roots are complex and different." << endl;
		cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
		cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
	}
  
  // Next soon.......
	return 0;
}
