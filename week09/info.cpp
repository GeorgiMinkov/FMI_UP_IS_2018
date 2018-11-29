// week09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

void input(int[], int);
void print(int arr[], int size);
int sumOfElements(int arr[], int size);

int main()
{
	
	int arr[10];
	int size = 5;

	input(arr, size);

	print(arr, size);

	std::cout << sumOfElements(arr, size) << std::endl;
	
	return 0;
}

void input(int arr[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << "arr[" << i << "] = ";
		std::cin >> arr[i];
	}
}

void print(int arr[], int size)
{
	std::cout << "\n-------------------------------\n";

	for (int i = 0; i < size; ++i)
	{
		std::cout << arr[i] << ' ';
	}

	std::cout << "\n-------------------------------\n";
}

int sumOfElements(int arr[], int size)
{
	int sum = 0;

	for (int i = 0; i < size; ++i)
	{
		sum += arr[i];
	}

	return sum;
}

bool isPrime(int number)
{
	if (number <= 1)
	{
		return false;
	}

	for (int i = 2; i <= number / 2; ++i)
	{
		if (number % i == 0)
		{
			return false;
		}
	}

	return true;
}

int sumOfPrimes(int arr[], int size)
{
	bool check = true;
	int sum = 0;

	for (int i = 0; i < size; ++i)
	{
		if (isPrime(arr[i]))
		{
			sum += arr[i];
			check = false;
		}
	}

	/*if (check)
	{
		std::cout << "No Prime numbers\n";
	}*/

	return sum;
}

const int SIZE = 10;

void input(int arr[][SIZE], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			std::cin >> arr[i][j];
		}
	}
}