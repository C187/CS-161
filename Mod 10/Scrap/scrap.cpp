#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main() {

	/*
	//2
	struct nameType
	{
		string first;
		string last;
	};

	struct courseType
	{
		string name;
		int callNum;
		int credits;
		char grade;
	};

	struct studentType
	{
		nameType name;
		double gpa;
		courseType course;
	};

	studentType student;
	studentType classList[100];
	courseType course;
	nameType name;

	// test cond

	//a
	//student.course.callNum = "CSC230";

	//b
	//cin >> student.name;

	//c
	//classList[0] = name;	
	//d
	//classList[1].gpa = 3.45;
	//e
	//name = classList[15].name;	//f	//student.name = name;	//g	//cout << classList[10] << endl;
	//h
	//for (int j = 0; j < 100; j++)
	//	classList[j].name = name;

	//3 - use above

	//a
	
	// Store the following information in course:
	// name: Programming I
	// callNum: 13452
	// credits: 3
	// grade: ""

	course.name = "Programming I";
	course.callNum = 13452;
	course.credits = 3;
	course.grade = ' ';

	//b
	for(int i = 0; i < 100; i++) {
		classList[i].gpa = 0.0;
	}

	//c
	classList[9].gpa += 0.75;

	*/

	//4

	struct partsType
	{
		string partName;
		int partNum;
		double price;
		int quantitiesInStock;
	};

	partsType inventory[100];

	//5
	// Use 4

	//a
	for (int i = 0; i < 100; i++) {
		inventory[i].partName = " ";
		inventory[i].partNum = -1;
		inventory[i].price = 0.0;
		inventory[i].quantitiesInStock = 0;
	}

	//b

	int length = 100;
	for (int i = 0; i < length; i++) {
		cout << inventory[i].partName << endl;
		cout << inventory[i].partNum << endl;
		cout << inventory[i].price << endl;
		cout << inventory[i].quantitiesInStock << endl;
	}




	return 0;
}