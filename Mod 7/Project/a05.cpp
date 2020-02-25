/*
Author: Chris Hall
Date: 24 - FEB - 2020
Class: CS - 161 - 10434
Assignment: 5
Sources: None
Discription: This program calculates the phone rates between two provided locations, connection, rate under three 
			 minutes, and rate over three minutes for four fifteen intervals of time and saves the output as a user
			 defined file. 
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

bool openInputFile(ifstream &inFile, string fileNameIn);
bool openOutputFile(ofstream &outFile, string fileNameOut);
void calc(ifstream &inFile, ofstream &outFile);
double calcAmount(int mins, double cFee, double p3mins, double pAf3mins);

int main() {
	ifstream inFile;
	ofstream outFile;
	string fileNameIn;
	string fileNameOut;
	string openError = "Unable to open file. Did you forget to include the extension?";

	// Get input and set output
	cout << "Enter the name of the input file: ";
	getline(cin, fileNameIn);
	cout << "Enter the name of the output file: ";
	getline(cin, fileNameOut);

	// File errors 
	if (!openInputFile(inFile, fileNameIn)) {
		cout << openError;
		exit(1);
	}
	if (!openOutputFile(outFile, fileNameOut)) {
		cout << openError;
		exit(1);
	}

	calc(inFile, outFile);
	inFile.close();
	outFile.close();
	cout << fileNameOut << " has been saved.\nYou can now quit this program.";
	return 0;
}

bool openInputFile(ifstream &inFile, string fileNameIn) {
	inFile.open(fileNameIn);
	if (!inFile)
		return false;
}
bool openOutputFile(ofstream &outFile, string fileNameOut) {
	outFile.open(fileNameOut);
	if (!outFile)
		return false;
}

void calc(ifstream &inFile, ofstream &outFile) {
	string cityFrom;
	string cityTo;
	double cFee; // Connection fee
	double p3mins; // Price for the first 3 minutes
	double pAf3mins; // Price for every minute after the third

	outFile << fixed << showpoint << setprecision(2);
	outFile << left << setw(12) << "City from" << setw(12) << "City to" << setw(10) << "15 mins" 
		<< setw(10) << "30 mins" << setw(10) << "45 mins" << setw(10) << "60 mins\n" << endl;

	while (inFile >> cityFrom) {
		inFile >> cityTo >> cFee >> p3mins >> pAf3mins;
		outFile << left << setw(12) << cityFrom << setw(12) << cityTo << setw(10) << calcAmount(15, cFee, p3mins, pAf3mins);
		outFile << setw(10) << calcAmount(30, cFee, p3mins, pAf3mins);
		outFile << setw(10) << calcAmount(45, cFee, p3mins, pAf3mins);
		outFile << setw(10) << calcAmount(60, cFee, p3mins, pAf3mins) << "\n" << endl;
	}
}

double calcAmount(int mins, double cFee, double p3mins, double pAf3mins) {
	double in3mins;
	double af3mins;
	double total;

	in3mins = cFee + p3mins;
	af3mins = mins - 3;
	total = in3mins + af3mins * pAf3mins;
	return total;
}