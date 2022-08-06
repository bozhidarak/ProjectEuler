#include "EulerFunctions.h"

// ProjectEuler.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>


int EulerFunctions::sumOfThreeOrFiveDivisor(int num) { //task1
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

int EulerFunctions::sumOfEvenFibonacciNums(int lastNum) { //task2

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

bool EulerFunctions::isPrime(long num) { // task 3
	for (int i = 2; i < num / 2 + 1; i++) {
		if (num % i == 0)
			return false;
	}
	return true;
}

long EulerFunctions::largestPrimeFactor(long long num) {
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

bool EulerFunctions::isPalindrom(int num) { // task 4

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

int EulerFunctions::largestPalindrom() {

	int largestPalindrom = 0;
	for (int i = 100; i < 1000; i++)
	{
		for (int j = 100; j < 1000; j++)
		{
			if (isPalindrom(i * j) && largestPalindrom < i * j)

				largestPalindrom = i * j;
		}
	}
	return largestPalindrom;

}


long long EulerFunctions::evenlyDevisible(int num) { // task 5 NOT COMPLETE
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

int EulerFunctions::squaresSum(int num) { //task 6
	int sum = 0;
	for (int i = 1; i < num + 1; i++)
	{
		sum += i * i;
	}
	return sum;
}

int EulerFunctions::sumOfSquares(int num) {
	int sum = 0;
	for (int i = 1; i < num + 1; i++)
	{
		sum += i;
	}
	return (sum * sum);
}

int EulerFunctions::differenceInSums(int sum1, int sum2) {
	return abs(sum1 - sum2);
}


int EulerFunctions::primeNumber(int num) { //task7
	int tempPrime = 5;
	int i = 5;
	while (num - 2 > 0) {
		if (isPrime(i)) {
			tempPrime = i;
			i++;
			num--;
		}
		else
			i++;
	}
	return tempPrime;
}

unsigned long long EulerFunctions::greatestProduct(std::string str) { //task 8
	unsigned long long arr[1000];
	unsigned long long product = 1;
	for (int i = 0; i < 1000; i++) {
		arr[i] = str[i] - '0';
	}

	for (int i = 0; i < 987; i++)
	{
		unsigned long long tempProduct = 1;
		for (int j = 0; j < 13; j++)
		{
			tempProduct *= arr[i + j];
		}
		if (tempProduct > product) {
			product = tempProduct;
		}

	}
	return product;
}

int EulerFunctions::pythagorean() { // task 9
	int a, b, c;
	for (a = 3; a < 332; a++) {
		for (b = a + 1; b < 498; b++) {
			for (c = b + 1; c < 997; c++) {
				if (a * a + b * b == c * c && a + b + c == 1000)
					return a * b * c;
			}
		}
	}
}

long long EulerFunctions::sumOfPrimes(int num) { //task 10

	long long sum = 0;
	bool* arr = new bool[num + 1]{ false };

	for (size_t i = 2; i <= num; i++)
	{
		if (arr[i]) {
			continue;
		}
		for (size_t j = i; j <= num; j += i)
		{
			if (i + j > num)
				break;
			arr[i + j] = true;
		}
	}
	for (size_t i = 2; i <= num; i++)
	{
		if (!arr[i])
		{
			sum += i;
		}
	}

	delete[] arr;

	return sum;
}

int EulerFunctions::numOfDivisorsHelper(int num) //task 12
//returns the count of divisors of num
{
	int sqrtNum = (int) sqrt(num);
	int res = 0;
	for (size_t i = 1; i < sqrtNum; i++)
	{
		if (num % i == 0) res += 2;
	}
	if (sqrtNum * sqrtNum == num) {
		res--;
	}
	return res;
}

int EulerFunctions::numOfDivisors(int numOfDiv) //returns the triangle number that has numOfDiv count of divisors
{
	long long res = 0;
	int i = 1;
	while (numOfDiv >= numOfDivisorsHelper(res)) {
		res += i;
		i++;
	}
	return res;
}
