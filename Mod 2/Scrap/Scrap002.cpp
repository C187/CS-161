#include <iostream> 
using namespace std;

int main() {
	int a = 5;
	int b = 6;
	int c = 0;

	cout << "show me a: " << a << endl;
	cout << "show me b: " << b << endl;
	cout << "show me c: " << c << endl;

	a = (b++) + 3;
	cout << "show me a: " << a << endl;
	cout << "show me b: " << b << endl;
	cout << "show me c: " << c << endl;

	c = 2 * a + (++b);
	cout << "show me a: " << a << endl;
	cout << "show me b: " << b << endl;
	cout << "show me c: " << c << endl;

	b = 2 * (++c) - (a++);

	cout << "show me a: " << a << endl;
	cout << "show me b: " << b << endl;
	cout << "show me c: " << c << endl;

	return 0;

}