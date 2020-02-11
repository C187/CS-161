/*
Author: Chris Hall
Date: 9 - FEB - 2020
Class: CS - 161 - 10434
Sources: None
Description: This program reads a text file that contains student names, there genders, type of school they attend, and 
their scores. It then echos the information, and finds and displays the average score by gender, school type, and total.
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

int main() {
	// Setup
	ifstream inputFile;
	string filename, name, schoolType;
	char gender;
	// Naming note: cc = community college, fs = female student, un = university, ect..
	int  cc = 0, count = 0, fs = 0, ms = 0, score = 0, un = 0;
	double ccScores = 0, fScores = 0, mScores = 0, total = 0, unScores = 0;
	
	// Intro and get file
	cout << "Enter the filename you want to open including its extension. (file.txt)" << endl;
	cout << "If the file isn't in the same directory as this program, please include the path." << endl;
	cout << "\nEnter the filename or path here: ";
	cin >> filename;
	cout << "\n";

	// Open file
	inputFile.open(filename);

	// Unable to open file
	if (inputFile.fail())
	{
		cout << "\n**** File not found. Please try again. ****";
		exit(1);
	}

	// File opened and echo
	while (inputFile.peek() != EOF) 
	{
		inputFile >> name >> gender >> schoolType >> score;
		cout << left << setw(12) << name << setw(4) << gender << setw(4) << schoolType << setw(8) << score << endl;
	}

	cout << "\n **** End of file reached ****\n" << endl;

	// Reset the read
	inputFile.clear();
	inputFile.seekg(0);

	//Read the data
	while (inputFile >> name >> gender >> schoolType >> score)
	{
		count++;
		if (gender == 'M')
		{
			ms++;
			mScores += score;
		}
		else if (gender == 'F')
		{
			fs++;
			fScores += score;
		}
		if (schoolType == "CC")
		{
			cc++;
			ccScores += score;
		}
		else if (schoolType == "UN")
		{
			un++;
			unScores += score;
		}
		total += score;
	}
	// Close file
	inputFile.close();

	// Output
	cout << fixed << showpoint << setprecision(2);
	cout << "Average of male student scores: " << mScores / ms << endl;
	cout << "Average of female student scores: " << fScores / fs << endl;
	cout << "Average of community college students: " << ccScores / cc << endl;
	cout << "Average of university students: " << unScores / un << endl;
	cout << "Average of all students: " << total / count << endl;
	cout << "\n**** End of program ****\n";

	return 0;
}