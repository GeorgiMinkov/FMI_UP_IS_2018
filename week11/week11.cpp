// ConsoleApplication5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int length(char *src) {
	int len = 0;
	while (*src)
	{
		++len;
		src++;
	}

	return len;
}

void copy(char *src, char *dst) {
	for (int index = 0; src[index] != '\0'; ++index) {
		dst[index] = src[index];
	}
	dst[length(src)] = '\0';
}

int numberOfSubstring(char *src, char *find) {
	int count = 0;
	int srcLen = length(src), findLen = length(find);

	if (srcLen < findLen) {
		return 0;
	}

	for (int index = 0; index < srcLen; ++index) {
		int sub = index;
		for (int start = 0; start < findLen && src[sub] && src[sub] == find[start]; ++sub, ++start) {

		}

		if (sub - index == findLen) {
			count++;
			index = sub - 1;
		}
	}

	return count;
}

int main()
{
	char src[] = "hellosubhello";
	char dst[6];

	copy(src, dst);

	char find[] = "hello";

	std::cout << numberOfSubstring(src, find) << std::endl;

	return 0;
}