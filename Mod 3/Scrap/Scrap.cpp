#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {

	// Q1
	//int num1, num2;
	//char symbol;

	// input = 47 18 * 28 $

	/* A
	cin >> num1 >> symbol >> num2;
	*/

	/* B
	cin >> symbol >> num1 >> num2;
	*/

	/*
	cin >> num1;
	cin.get(symbol);
	cin >> num2;
	*/

	/*
	cin >> num1 >> num2;
	cin.get(symbol);
	*/

	/* E
	cin.get(symbol);
	cin >> num1 >> num2;
	*/

	//cout << "num1 = " << num1 << endl;
	//cout << "num2 = " << num2 << endl;
	//cout << "symbol = " << "'" << symbol << "'" << endl;


	// Q2

	//int x, y;
	//double z;

	// input = 6.56 32

	/* A
	cin >> x >> y >> z;
	*/

	/* B
	cin >> x >> z >> y;
	*/
	
	/* C
	cin >> z >> x >> y;
	*/

	// COME BACK TO C

	//cout << "x = " << x << endl;
	//cout << "y = " << y << endl;
	//cout << "z = " << z << endl;



	// Q3

	//int x, y;
	//char symbol;

	/* input = 
	38 26 * 67 33
	24 $ 55 # 34
	# & 63 85
	*/

	/* A
	cin >> x >> y; 
	cin.ignore(100, '\n');
	cin >> symbol;
	*/

	/* B
	cin >> x;
	cin.ignore(100, '*');
	cin >> y;
	cin.get(symbol);
	*/

	/* C
	cin >> y;
	cin.ignore(100, '\n');
	cin >> x >> symbol;
	*/

	/* D
	cin.get(symbol);
	cin.ignore(100, '*');
	cin >> x;
	cin.ignore(100, '\n');
	cin >> y;
	*/

	/* E
	cin.ignore(100, '\n');
	cin >> x >> symbol;
	cin.ignore(100, '\n');
	cin.ignore(100, '&');
	cin >> y;
	*/

	//cout << "x = " << x << endl;
	//cout << "y = " << y << endl;
	//cout << "symbol = '" << symbol << "'" << endl;


	// Q4

	//int x = 10, y = 18;
	//char z = '*';

	// input = 46 A 49

	//cin >> x >> y >> z;
	//cout << x << " " << y << " " << z << endl;



	// Q5

	//int x, y;
	//double z;
	//char ch;

	// input a = 35 62.78
	// input b = 86 32A 92.6
	// input c = 12 .45A 32

	//cin >> x >> y >> ch >> z;

	//cout << "x = " << x << endl;
	//cout << "y = " << y << endl;
	//cout << "z = " << z << endl;
	//cout << "ch = '" << ch << "'" << endl;



	// Q6 

	//int num;
	//char discard;

	// input = #34

	/* A
	cin.get (discard);
	cin >> num;
	*/

	/* B
	discard = cin.peek();
	cin >> num;
	*/

	/* C
	cin.get (discard); 
	cin.putback (discard); 
	cin >> discard;
	cin >> num;
	*/

	//cout << "num = " << num << endl;
	//cout << "discard = " << discard << endl;



	// Q7

	//string name;

	// input = Brenda Clinton

	//getline(cin, name);
	//cout << "Name entered: " << name << endl;



	// Q8

	//int age;
	//string name;

	// input a = 23 Lance Grant
	/* input b =
	23
	Lance Grant
	*/

	//cin >> age;
	//getline(cin, name);

	//cout << "Age: " << age << endl;
	//cout << "Name: '" << name << "'" << endl;



	// Q9
	
	/*
	int num1, num2;
	ifstream infile;
	ofstream outfile;

	infile.open("input.dat");
	outfile.open("output.dat"); 
	infile >> num1 >> num2;
	outfile << "Sum = " << num1 + num2 << endl;

	infile.close();
	outfile.close();

	*/

	// Q10

	
	
	double distance = 375; 
	double speed = 58; 
	string day = "Sunday";

	ofstream outfile;

	outfile.open("travel.dat");
	outfile << "Day = " << day << endl;
	outfile << "Distance = " << distance << endl;
	outfile << "Speed = " << speed << endl;
	outfile.precision(3);
	outfile << "Travel Time = " << distance / speed;
	outfile.close();

	return 0;
}