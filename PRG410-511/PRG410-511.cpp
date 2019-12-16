// PRG410-511.cpp : This file contains the 'main' function. Program execution begins
//and ends there.
//
/*
Write a program that prompts the user to input an integer and then outputs both the
individual digits of the number and the sum of the digits.

For example, it should output the individual digits of:

3456 as 3 4 5 6
8030 as 8 0 3 0
2345526 as 2 3 4 5 5 2 6
4000 as 4 0 0 0
-2345 as 2 3 4 5
*/

#include <iostream>
using namespace std;

int inputNum = 0, digit = 0, sum = 0;

int both(int n)
{
	int remainder;

	while (n > 0)
	{
		sum = (sum * 10) + n % 10;
		n = n / 10;
	}

	n = sum;
	sum = 0;
	cout << "The digits are: ";
	while (n > 0) {
		remainder = n % 10;
		sum = sum + remainder;
		digit = n % 10;
		n = n / 10;
		cout << digit << " ";
	}
	return sum;
}

int main()
{
	cout << "Enter a number: ";
	cin >> inputNum;

	if (inputNum < 0)
	{
		inputNum = -1 * inputNum;
	}

	cout << "\nThe sum of digits is: " << both(inputNum) << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
