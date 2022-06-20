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

int sumOfEvenFibonacciNums(int lastNum) { //task2

	int sum = 0;
	int temp = 1;
	int i = 1;
	while (i < lastNum)
	{
		int temp2 = i;
		i += temp;
		temp = temp2;
		if (i % 2 == 0) {
			sum += i;
		}
	}
	return sum;
}


int main()
{

	std::cout << sumOfThreeOrFiveDivisor(1000)<<std::endl;
	std::cout << sumOfEvenFibonacciNums(4000000);
}
