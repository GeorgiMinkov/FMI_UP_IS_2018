// week.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	//int n = -1, element = 0;

	//do
	//{
	//	std::cout << "n = ";
	//	std::cin >> n;
	//} while (n <= 0);

	//for (int i = 0; i < n; ++i)
	//{
	//	element = element * 10 + 1;
	//	std::cout << element;

	//	if (i < n - 1)
	//	{
	//		std::cout << " + ";
	//	}
	//}

	//std::cout << "\n-----------01------------\n";
	//const int left = 100, right = 200;

	//int sum = 0, count = 0;

	//for (int element = 100; element <= 200; ++element)
	//{
	//	if (element % 9 == 0)
	//	{
	//		sum += element;
	//		count++;
	//	}
	//}	
	//
	//std::cout << "Sum of element -> " << sum << "\nCount -> " << count;

	//std::cout << "\n-----------01------------\n";
	//std::cout << "\n-----------02------------\n";
	//int input = -1;

	//std::cout << "Enter number -> ";
	//std::cin >> input;

	//int tmp = input, reversed = 0;

	//while (tmp != 0)
	//{
	//	int last = tmp % 10;

	//	reversed = reversed * 10 + last;

	//	tmp /= 10;
	//}


	//std::cout << input << " -> " << reversed << std::endl;

	//std::cout << "\n-----------03------------\n";
	//int i = 0, j = 0, rows = 0;

	//std::cout << "\n\n Display the pattern like a diamond:\n";
	//std::cout << "----------------------------------------\n";
	//std::cout << " Input number of rows (half of the diamond): ";
	//std::cin >> rows;

	//for (i = 0; i < rows; i++)
	//{
	//	for (j = 0; j < rows - i; j++)
	//		std::cout << " ";

	//	for (j = 0; j < 2 * i - 1; j++)
	//		std::cout << "*";

	//	std::cout << std::endl;
	//}

	//for (i = rows - 1; i > 0; i--)
	//{
	//	for (j = 0; j < rows - i; j++)
	//		std::cout << " ";

	//	for (j = 0; j < 2 * i - 1; j++)
	//		std::cout << "*";

	//	std::cout << std::endl;;
	//}
	
	
	
	std::cout << "\n-----------04------------\n";
	int number = -1;

	std::cin >> number;

	int last = number % 10, first = -1;

	int tmp = number;
	while (tmp != 0)
	{
		first = tmp % 10;

		tmp /= 10;
	}

	std::cout << last << ' ' << first << std::endl;
	std::cout << "\n-----------01------------\n";
	std::cout << "\n-----------01------------\n";
	std::cout << "\n-----------01------------\n";
	std::cout << "\n-----------01------------\n";
	std::cout << "\n-----------01------------\n";
	std::cout << "\n-----------01------------\n";
	std::cout << "\n-----------01------------\n";
	std::cout << "\n-----------01------------\n";
	std::cout << "\n-----------01------------\n";





	//int SOME = 556;

	//int number = 156;

	//int test = SOME;
	//int last = SOME % 10, first = 0;

	//while (test != 0)
	//{
	//	first = test % 10;

	//	test /= 10;
	//}

	//std::cout << first << ' ' << last << std::endl;

	return 0;
}

