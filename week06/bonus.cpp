// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	//int number = 0;
	//bool flag = false;
	//do
	//{
	//	std::cin >> number;
	//} while (number <= 0);
	////size_t == unsigned int
	//for (size_t index = 10; index < 576; index++)
	//{
	//	number = index;
	//	while (number && !flag)
	//	{
	//		int el = number % 10;
	//		//flag = (el % 2) ? true : false;
	//		if ((el % 2) != 0)
	//		{
	//			flag = true;
	//		}
	//		number /= 10;
	//	}
	//	if (flag)
	//	{
	//		std::cout << "Yok, bace!";
	//	}
	//	else
	//	{
	//		std::cout << "Evala!";
	//	}
	//	flag = false;
	//}
	//
	const int size = 4;
	for (int i = 2, k = 6; --k; i -= i || (i += size)) // i = i - (i || (i = i + size))
		std::cout << i + 1;
	return 0;
}
