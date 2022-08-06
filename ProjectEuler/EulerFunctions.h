#pragma once
#include <iostream>
#include<string>

class EulerFunctions
{
public:
	int sumOfThreeOrFiveDivisor(int num); //task1

	int sumOfEvenFibonacciNums(int lastNum); //task2

	bool isPrime(long num);// task 3
	long largestPrimeFactor(long long num);

	bool isPalindrom(int num); // task 4
	int largestPalindrom();

	long long evenlyDevisible(int num);// task 5 NOT COMPLETE

	int squaresSum(int num);//task 6
	int sumOfSquares(int num);
	int differenceInSums(int sum1, int sum2);

	int primeNumber(int num); //task7

	unsigned long long greatestProduct(std::string str); //task 8

	int pythagorean(); // task 9

	long long sumOfPrimes(int num); //task 10
	//task11 ??
	int numOfDivisorsHelper(int num);//task 12
	int numOfDivisors(int num);

};

