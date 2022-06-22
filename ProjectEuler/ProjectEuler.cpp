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

bool isPalindrom(int num) { // task 4

	if (num > 10000 && num < 100000) { // 12345
		if (num % 10 == num / 10000 && (num / 10) % 10 == (num / 1000) % 10)
			return true;
	}
	else // 123456
	{
		if (num % 10 == num / 100000 && (num / 10) % 10 == (num / 10000) % 10 && (num / 100) % 10 == (num / 1000) % 10)
			return true;
	}
	return false;
}

int largestPalindrom() {

	int largestPalindrom = 0;
	for (int i = 100; i < 1000; i++)
	{
		for (int j = 100; j < 1000; j++)
		{
			if (isPalindrom(i * j) && largestPalindrom < i*j)

				largestPalindrom = i * j;
		}
	}
	return largestPalindrom;

}


long long evenlyDevisible(int num) { // task 5 NOT COMPLETE
	long long res = 6;

	for (int i = 4; i < num + 1; i++)
	{
		if (isPrime(i)) {
			res *= i;
		}
		else {
			int temp = i;
			for (int j = 2; j < i; j++)
			{
				if (temp % j == 0)
				{
					temp /= j;
					
				}
			}
			res *= temp;
		}
	}
	return res;
}

int squaresSum(int num) { //task 6
	int sum = 0;
	for (int i = 1; i < num + 1; i++)
	{
		sum += i * i;
	}
	return sum;
}

int sumOfSquares(int num) {
	int sum = 0;
	for (int i = 1; i < num + 1; i++)
	{
		sum += i;
	}
	return (sum * sum);
}

int differenceInSums(int sum1, int sum2) {
	return abs(sum1 - sum2);
}


int main()
{

	//std::cout << sumOfThreeOrFiveDivisor(1000)<<std::endl;
	//std::cout << sumOfEvenFibonacciNums(4000000)<<std::endl;
	//std::cout << largestPrimeFactor(600851475143);
	//std::cout << largestPalindrom()<<std::endl;
	//std::cout << evenlyDevisible(10)<<std::endl;
	std::cout << squaresSum(100)<<std::endl;
	std::cout << sumOfSquares(100) << std::endl;
	std::cout << differenceInSums(squaresSum(100), sumOfSquares(100))<<std::endl;
}
