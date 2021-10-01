/*
	Author: Kunal Kumar Sahoo
	Date: 28 September 2021
	Objective: To calculate the real roots of a given quadratic equation.
*/

/*
	Pre-requisite knowledge:
		- Quadratic equations
		- Sridharacharya formula	
			- x = (-b + sqrt(D))/(2*a) and (-b - sqrt(D))/(2*a)
			where D = b^2 - 4*a*c
*/			

#include <iostream>
#include <cmath>

using namespace std;

int main() {

	double a, b, c;
	double x1, x2;
	cout << "The quadratic equation has general formula: ax^2 + bx + c = 0" << endl;
	cout << "Enter the values of coefficients:" << endl;

	cout << "Enter the value of coefficients of x^2 (a), x (b) and the constant (c): " << endl;
	cin >> a >> b >> c;

	double D = pow(b, 2) - 4 * a * c;

	if (D < 0)
		cout << "No real solutions." << endl;

	else {
		x1 = (-b + sqrt(D)) / (2*a);
		x2 = (-b - sqrt(D)) / (2*a);

		cout << "Solutions of the quadratic equation are: " << x1 << " and " << x2 << endl;
	}
	
	return 0;
}