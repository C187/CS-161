/*
Author: Chris Hall
Date: 07 - MAR - 2020
Class: CS - 161 - 10434
Assignment: 7
Sources: "Assignment 7 Help" provided by instructor.
Description: This program has reads arrays.txt to m to calculate students’ average test scores and their grades.
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

void read(ifstream &infile, string names[], double score[][5]);
void header();
void calc(double score[][5], char grades[10]);
void print(string names[], double grades[][5], double ave, char letter[]);
char calculateGrade(double ave);

int main()
{
	ifstream infile;
	string names[10];
	double score[10][5], ave = 0;
	char letter[10];

	infile.open("arrays.txt"); // I'm assuming this is fine going off the example

	if (!infile) {
		cout << "Couldn't open arrays.txt.";
		exit(1);
	}

	read(infile, names, score);
	calc(score, letter);
	header();
	print(names, score, ave, letter);

	infile.close();

	return 0;
}


void read(ifstream &infile, string names[], double grades[][5])
{
	int i = 0, j = 0;

	for (int i = 0; i < 10; i++) {
		infile >> names[i];
		for (int j = 0; j < 5; j++) {
			infile >> grades[i][j];
		}
	}
}

void header()
{
	cout << left << setw(10) << "Name" << setw(9) << "Score 1" << setw(9) << "Score 2" << setw(9)
		<< "Score 3" << setw(9) << "Score 4" << setw(9) << "Score 5" << setw(9) << "Grade\n" << endl;
}

void calc(double score[][5], char letter[10])
{
	int o = 0, k = 0;
	double ave = 0, sum;

	for (int o = 0; o < 10; o++) {
		sum = 0;
		for (int k = 0; k < 5; k++) {
			sum = sum + score[o][k];
		}
		ave = sum;
		letter[o] = calculateGrade(ave / 5);
	}
}

char calculateGrade(double ave)
{
	char letter;

	if (ave >= 90 && ave <= 100) {
		letter = 'A';
	}
	else if (ave >= 80 && ave < 90) {
		letter = 'B';
	}
	else if (ave >= 70 && ave < 80) {
		letter = 'C';
	}
	else if (ave >= 60 && ave < 70) {
		letter = 'D';
	}
	else {
		letter = 'F';
	}
	return letter;
}

void print(string names[], double score[][5], double ave, char letter[])
{
	int p, l;
	double totalAve = 0, sum;

	for (p = 0; p < 10; p++) {
		cout << left << setw(10) << names[p];
		for (l = 0; l < 5; l++) {
			cout << setw(9) << fixed << showpoint << setprecision(2) << score[p][l];
		}
		cout << letter[p] << endl;
	}
	
	cout << endl;

	for (int p = 0; p < 10; p++) {
		sum = 0;
		for (int l = 0; l < 5; l++) {
			sum = sum + score[p][l];
		}
		totalAve = totalAve + sum;
	}
	cout << "The class average is " << totalAve / 50 << endl;
}