#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

	// Q1 
	/*
	int count = 5;
	double sum = 0;
	while (count > 3)
	{
		sum = sum + pow(count, 2.0);
		count--;
	}
	cout << sum << endl;
	// Output is 41
	*/ 

	//Q2
	/*
	// Input is 15 26 18 16 -1
	int num;
	int sum;
	cin >> sum;
	num = sum;
	while (num != -1)
	{
		cin >> num;
		sum = sum + num;
	}
	cout << "Sum = " << sum << endl;

	// Output is Sum = 74
	*/

	// Q3
	/*
	// FIX this..

	int count = 0;
	int sum = 0;
	cin >> num;
	while(count <= 10);
	{ 
	cin >> num;
	count++;
	sum = sum + count;
	}

	*/
	/*
	// This is the result...
	int num;
	int	count = 0;
	int sum = 0;

	while (count < 10)
	{
		cin >> num;
		count++;
		sum = sum + num;
	}

	cout << "The sum of ten numbers is " << sum;
	*/

	// Q4
	/*
	// Get the output
	int count = 3;
	while (--count > 0)
		cout << count << " ";
	cout << endl;
	*/

	// Q5
	/*
	//Get the output
	int num = 0;
	int count;
	int y = 0;
	for (count = 1; count <= 4; ++count)
	{
		num = 3 * (count - 1) + (y - count);
		cout << num << " ";
	}
	cout << count << " " << endl;
	*/

	// Q6
	// Write a for statement to add all the multiples of 3 between 1 and 100.
	/*
	int sum = 0;
	for (int n = 3; n <= 100; n = n + 3) {
		sum = sum + n;
		cout << sum << " "; // Checking
	}
	cout << "The sum of all multiples of 3 between 1 and 100 is " << sum;
	*/

	// Q7
	/*
	// Get the output
	int j;
	for (j = 0; j < 8; j++)
	{
		cout << j * 25 << " - ";
		if (j != 7)
			cout << (j + 1) * 25 - 1 << endl;
		else
			cout << (j + 1) * 25 << endl;
	}
	*/

	// Q8
	/*
	// A
	int x = 5; 
	int y = 40;
	do {
	x = x + 10;
	} while (x < y);
	cout << x << " " << y << endl;
	*/
	
	/*
	// B
	int x = 5; 
	int y = 80;
	do {
		x = x * 2;
	}  while (x < y);
	cout << x << " " << y << endl;
	*/

	/*
	// C
	int x = 5;
	int y = 20;
	do {
	x = x + 2;
	} while (x >= y);
	cout << x << " " << y << endl;
	*/

	// D
	/*
	int x = 5; 
	int y = 35;
	while (x < y) {
		x = x + 10;
	}
	cout << x << " " << y << endl;
	*/

	// Q9
	/*
	int limit = 4, first = 5, j = 1;
	
	// -- This is given --
	for (j = 1; j <= limit; j++)
	{
		cout << first * j << endl;
		first = first + (j - 1);
	}
	
	// -- while --
	while (j <= limit) {
		cout << first * j << endl;
		first = first + (j - 1);
		j++;
	}

	// -- do while -- 
	do {
		cout << first * j << endl;
		first = first + (j - 1);
		j++;
	} while (j <= limit);
	
	cout << endl;	// intl outupt to match, 5 10 18 32	*/

	// Q10
	/*
	// A
	int i, j;
	for (i = 1; i <= 5; i++)
	{
		for (j = (i + 1); j <= 5; j++)
		cout << setw(5) << j;
		cout << endl;
	}
	*/

	/*
	// B
	int i, j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= i; j++)
		cout << setw(3) << j;
		cout << endl;
	}
	*/
	
	/*
	// C
	const int M = 10;
	const int N = 10;
	int i, j;
	for (i = 1; i <= M; i++)
	{
		for (j = 1; j <= N; j++)
		cout << setw(3) << M * (i - 1) + j;
		cout << endl;
	}
	*/

	// D
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= (9 - i); j++)
		cout << " ";
		for (j = 1; j <= i; j++)
		cout << setw(1) << j;
		for (j = (i - 1); j >= 1; j--)
		cout << setw(1) << j;
		cout << endl;
	}

	return 0;
}