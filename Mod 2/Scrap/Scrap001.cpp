#include <iostream>
using namespace std;

int main() 
{
	int num1;
	int num2;

	cout << "Input two integers separated by one or more spaces: ";
	cin >> num1 >> num2;
	cout << endl;

	cout << "Your first number: " << num1 << endl;
	cout << "Your second number: " << num2 << endl;

	cout << num1 << " * 2 - " << num2 << " = " << num1 * 2 - num2 << endl;

	return 0;
}