/*
Author: Chris Hall
Date: 28 - FEB - 2020
Class: CS - 161 - 10434
Assignment: 6
Sources: None
Description: This program has two functions. First to find the lowest integer in an array. Second to convert a string
to uppercase.

*/
#include <iostream>
#include <cstring>
#include <string>
#include <cctype>
using namespace std;

int smallestIndex(int list[], int size);
const int ARRAY_SIZE = 5;
const int ARRAY_TO_UPPER_SIZE = 13;
void upperCase(char arrayToUpper[]);

int smallestIndex(int list[], int size) { // Index function
	int minIndex = list[0];
	for (int i = 1; i < ARRAY_SIZE; i++) {
		if (list[minIndex] > list[i]) {
			minIndex = i;
		}
	}

	return minIndex;
}

void upperCase(char arrayToUpper[]) // Convert function
{
	for (int i = 0; i <= strlen(arrayToUpper); i++) {

		// Converting to uppercase
		if (arrayToUpper[i] >= 97 && arrayToUpper[i] <= 122) {
			arrayToUpper[i] = arrayToUpper[i] - 32;
		}
	}

	cout << "Here it is converted: " << arrayToUpper << endl;
}

int main() // Main
{
	int select;
	int list[ARRAY_SIZE];
	char arrayToUpper[14];

	// Input select for fuctions
	cout << "This program has two functions.\nEnter 1 if you want to find the smallest integers in an array." << endl;
	cout << "Enter 2 to convert a string to uppercase\n\nEnter 1 or 2: ";
	cin >> select;

	if (select == 1) { // Fuction 1 - find smallest integer in aray
		cout << "Enter 5 integers: "; 
		for (int i = 0; i < ARRAY_SIZE; i++) {
			cin >> list[i]; // Input
		}

		cout << "The first smallest integer is at index " << smallestIndex(list, ARRAY_SIZE) << endl;
	}

	else if (select == 2) { // Fuction 2 - convert to uppercase
		cout << "Enter a string of a maximum of 13 characters to be converted: "; 
		cin>>arrayToUpper; // Input

		// Echo and out
		cout << "You entered: " << arrayToUpper << endl;
		upperCase(arrayToUpper);
	}

	return 0;
}