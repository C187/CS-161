/*
Author: Chris Hall
Date: 20 - JAN - 2020
Class: CS - 161 - 10434
Sources: None
Discription: This program converts an imputed Fahrenheit temperature and display it in Celsius.
*/

#include <iostream>
using namespace std;

int main() 
{
	double fahrenheit;

	cout << "Enter a temperature in Fahrenheit you want converted into Celsius here: ";
	cin >> fahrenheit;
	cout << endl;

	cout << fahrenheit << " degrees Fahrenheit is " << (fahrenheit - 32) * 5 / 9 << " degrees Celsius." << endl;

	return 0;
}