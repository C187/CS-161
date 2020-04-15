/*
Author: Chris Hall
Date: 17 - MAR - 2020
Class: CS - 161 - 10434
Assignment: Final
Sources: None
Description: This proogram gets high and low temptures for three years, finds the average, and prints it out
*/

#include <iostream>
#include <iomanip>

using namespace std;

void getData(int arr[3][3]) {
	int year = 2015;
	for (int i = 0; i < 3; i++) {
		cout << "Enter Temperatures for year " << year << ":\n";
		for (int k = 0; k < 2; k++) {
			if (k == 0) {
				cout << "Enter the high temperature:\n";
				cin >> arr[i][k];
			}
			if (k == 1) {
				cout << "Enter the low temperature:\n";
				cin >> arr[i][k];
			}
		}

		++year;
		cout << endl;
	}
}

void averageAnnual(int arr[3][3]) {
	for (int i = 0; i < 3; i++) {
		int k = 0;
		int ave = (arr[i][k] + arr[i][k + 1]) / 2;
		arr[i][k + 2] = ave;
	}

	cout << setw(5) << "High" << setw(5) << "Low" << setw(5) << "Ave\n";

	for (int i = 0; i < 3; i++) {
		int k = 0;
		cout << setw(5) << arr[i][k] << setw(5) << arr[i][k + 1] << setw(5) << arr[i][k + 2] << "\n";
	}
}

void averageHigh(int arr[3][3]) {
	int k = 0, i = 0;
	int ave = (arr[i][k] + arr[i + 1][k] + arr[i + 2][k]) / 3;
	cout << "The average of highest temprature: " << ave;
}

int main() {
	int arr[3][3];
	void getData(int arr[3][3]);
	void averageAnnual(int arr[3][3]);
	void averageHigh(int arr[3][3]);

	getData(arr);
	averageAnnual(arr);
	averageHigh(arr);

	return 0;
}