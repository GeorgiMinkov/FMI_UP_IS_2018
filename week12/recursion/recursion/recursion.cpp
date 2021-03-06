// week12_Recursion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

//// PLAN FOR TODAY:
//// Easy recursion example as factorial 
//
//// more complex and made with binary recursion
//int fibSequence(...);
//
//// Example of mutual recursion
//// A -> B | B -> A
//
//// Nested recursion
//int Ackermann(...);
//
//// Solve some task as element in row, sum of digits, multiply all elements in array

bool isNumberEven(int);
bool isNumberOdd(int);

int factorial(int num) {
	/// base
	if (num == 0) {
		return 1;
	}

	int res =  num * factorial(num - 1);
	return res;
} 
// return index <= 1 ? 1 : fib(index - 1) + fib(index - 2);
int fibSequance(int index) {
	if (index == 0 || index == 1) {
		return 1;
	}
	
	if (index < 0) {
		return -1;
	}

	return fibSequance(index - 1) + fibSequance(index - 2);
}

bool isNumberOdd(int number) {
	if (number == 0) {
		return false;
	}

	return isNumberEven(number - 1);
}

bool isNumberEven(int number) {
	if (number == 0) {
		return true;
	}

	return isNumberOdd(number - 1);
}

int ackermann(int m, int n) {
	if (m == 0) {
		return n + 1;
	}

	if (m > 0 && n == 0) {
		return ackermann(m - 1, 1);
	}

	return ackermann(m - 1, ackermann(m, n - 1));
}

int sumOfDigits(int number) {
	// return number == 0 ? 0 : number % 10 + sumOfDigits(number / 10);
	if (number == 0) {
		return 0;
	}

	return number % 10 + sumOfDigits(number / 10);
}

bool isNumberInRow(int number, int *arr, int size) {
	return size == 0 ? false : (*arr == number ? true : isNumberInRow(number, arr + 1, size - 1));
}

bool easyToReadRecursion(int number, int *arr, int size) {
	if (size == 0) {
		return false;
	}
	
	return (*arr == number ? true : easyToReadRecursion(number, arr + 1, size - 1));
}

void over(int number, int *arr, int size, bool &res) {
	if (size == 0) {
		res = false;
		return;
	}

	if (arr[size - 1] == number) {
		res = true;
		return;
	}

	easyToReadRecursion(number, arr, size - 1);
}

int main()
{
	int number = 4;

	cout << "Factorial (4) -> " << factorial(number) << endl;
	cout << "Fib " << number << " -> " << fibSequance(number) << endl;
	cout << "Is even " << number << " -> " << isNumberEven(number) << endl;
	cout << "Sum of digits of 156 -> " << sumOfDigits(156) << endl;

	return 0;
}
