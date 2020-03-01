#include <iostream>
using namespace std;

int main() {
	
	/*int myList[10];
	for (int i = 0; i < 10; i++) {
		myList[i] = i;
	}

	return 0;*/

	/*double heights[10] = { 5.2, 6.3, 5.8, 4.9, 5.2, 5.7, 6.7, 7.1, 5.10, 6.0 };
	int weights[7] = { 120, 125, 137, 140, 150, 180, 210. };
	char specialSymbols[] = { '$', '#', '%', '@', '&', '! ', '^' };
	string seasons[] = { "fall", "winter", "spring", "summer" }*/
	
	/*int beta[7] = { 3, 5 };
	for (int i = 2; i < 7; i++)
		{
			beta[i] = 3 * i + 2;
			beta[i - 1] = beta[i - 1] + beta[i];
			beta[i - 2] = beta[i - 2] + beta[i - 1];
		}
	for (int i = 0; i < 7; i++)
			cout << beta[i] << " ";
	cout << endl;
	return 0;*/

	//Suppose that you have the following function definition :
	void sum(int x, int y, int & z)
	{
		z = x + y;
	}

	//Consider the following declarations :
	int list1[10], list2[10], list3[10];
	int a, b, c;
	
	//Which of the following function calls is valid ?
	a.sum(a, b, c);
	b.sum(list1[0], list2[0], a);
	c.sum(list1, list2, c);
	d. for (int i = 1; i <= 10; i++)
		sum(list1[i], list2[i], list3[i]);
	
 }