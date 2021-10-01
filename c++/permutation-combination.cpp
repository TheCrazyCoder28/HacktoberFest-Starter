/*
	Author: Kunal Kumar Sahoo
	Date: 27 September 2021
	Objective: Calculate combinations and permutations for the given value of 'n' and 'r'
*/

/*
	Pre-requisite knowledge:
		- Combination: nCr = n!/(r!*(n-r)!)      
		- Permutation: nPr = n!/(n-r)! = nCr * r!
*/

/*
	Strategy:
		- Create a function to calculate factorials.
		- Create a function to calculate combinations using the function to calculate factorials.
		- Create a function to calculate permutations using the functions to calculate the combinations and factorials.
*/

// Including the standard I/O stream file.
#include <iostream>

// Importing the defintions namespace of std in the current namespace
using namespace std;

// declaring functions 
double factorial(int num); 
double nCr(int n, int r);
double nPr(int n, int r);

// driver code
int main() {

	int n, r, choice; // declaring integer variables
	double answer; // declaring decimal variables

	// Taking input from the users via prompting
	cout << "Enter total number of objects (n): ";
	cin >> n;

	cout << "Enter number of objects to be chosen (r): ";
	cin >> r;

	cout << "Enter your choice:\n" << "\t1: Calculate Combinations\n" << "\t2: Calculate Permutations\n";
	cin >> choice;

	// Check which choice user chose 
	switch(choice) {
		case 1:
			answer = nCr(n, r);
			cout << n << 'C' << r << " = " << answer << endl;
			break;
		case 2:
			answer = nPr(n, r);
			cout << n << 'P' << r << " = " << answer << endl;
			break;
		default:
			cout << "Invalid choice" << endl;
	} 

	return 0;
}

// defining functions
double factorial(int number) {
	double  answer = 1.0;
	for (int i = number; i > 1; i--)
		answer *= i;
	return answer;
}

double nCr(int n, int r){
	return (factorial(n) / (factorial(r) * factorial(n-r)));
}

double nPr(int n, int r){
	return (nCr(n, r) * factorial(r));
}
