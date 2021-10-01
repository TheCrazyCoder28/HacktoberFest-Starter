/*
	Author: Kunal Kumar Sahoo
	Date: 27 September 2021
	Objective: Print multiplication table of a number till a specified limit.
*/

#include <iostream>

using namespace std;

int main() {
	int number, limit;

	cout << "Enter number whose multiplication table you want to print: ";
	cin >> number;

	cout << "Enter number till which you want to print the multiplication table of " << number << ": ";
	cin >> limit;

	for (int i = 0; i < limit; i++)
		cout << number << " x " << i + 1 << " = " << (number * (i+1)) << endl;

	return 0;
}