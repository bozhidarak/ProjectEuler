// ProjectEuler.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int sumOfThreeOrFiveDivisor(int num) { //task1
	int sum = 0;
	for (int i = 0; i < num; i++)
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

bool isPrime(long num) { // task 3
	for (int i = 2; i < num / 2; i++) {
		if (num % i == 0)
			return false;
	}
	return true;
}

long largestPrimeFactor(long long num) {
	long maxFactor = 1;
	if (num % 2 == 0) num = num / 2;
	for (int i = 3; i < num + 1; i += 2) {
		if (isPrime(i) && num % i == 0) {
			maxFactor = i;
		}
		if (num % i == 0) {
			num /= i;
		}

	}
	return maxFactor;
}


int main()
{

	std::cout << sumOfThreeOrFiveDivisor(1000)<<std::endl;
	std::cout << sumOfEvenFibonacciNums(4000000)<<std::endl;
	std::cout << largestPrimeFactor(600851475143);

}
