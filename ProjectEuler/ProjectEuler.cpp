// ProjectEuler.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>


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


int primeNumber(int num) { //task7
	int tempPrime = 5;
	int i = 5;
	while (num -2 > 0) {
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

unsigned long long greatestProduct(std::string str) { //task 8
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

int pythagorean() { // task 9
	int a, b, c;
	for (a = 3; a < 332; a++) {
		for (b = a+1; b < 498; b++) {
			for (c = b+1; c < 997; c++) {
				if (a * a + b * b == c * c && a + b + c == 1000)
					return a * b * c;
			}
		}
	}
}


int main()
{

	//std::cout << sumOfThreeOrFiveDivisor(1000)<<std::endl;       //task 1
	//std::cout << sumOfEvenFibonacciNums(4000000)<<std::endl;     //task 2
	//std::cout << largestPrimeFactor(600851475143);               //task 3
	//std::cout << largestPalindrom()<<std::endl;                  //task 4
	//std::cout << evenlyDevisible(10)<<std::endl;                 //task 5 NOT COMPLETE
	//std::cout << differenceInSums(squaresSum(100), sumOfSquares(100))<<std::endl; //task 6
	//std::cout << primeNumber(10001);		//task 7
	//std::cout << greatestProduct("7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450");
	std::cout << pythagorean();

}
