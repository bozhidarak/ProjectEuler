// ProjectEuler.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int sumOfThreeOrFiveDivisor(int num) { //task1
	int sum = 0;
	for (size_t i = 0; i < num; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	return sum;
}

int main()
{

	std::cout << sumOfThreeOrFiveDivisor(1000);
}
