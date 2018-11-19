#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int num1;
	int num2;
	int input;
	int sum;
	
	cout << "Please type a number!";
	cin >> num1;

	cout << "Type a second number!";
	cin >> num2;

	cout << "Now, please type in either 1, 2, 3, or 4\n";
	cout << "With 1 being addition\n";
	cout << "With 2 being subraction\n";
	cout << "With 3 being multiplacation\n";
	cout << "With 4 being division\n";
	cin >> input;
	if (input == 1) {
		sum = num1 + num2;
		cout << "Here is the Sum of your Numbers Entered:  " << sum << endl;
	}
	if (input == 2) {
		sum = num1 - num2;
		cout << "Here is the Sum of your Numbers Entered Subtracted:  " << sum << endl;
	}
	if (input == 3) {
		sum = num1 * num2;
		cout << "Here is the Sum of your Numbers Entered Multiplied:  " << sum << endl;
	}
	if (input == 4) {
		sum = num1 / num2;
		cout << "Here is the Sum of your Numbers Entered Divided:  " << sum << endl;
	}
	return 0;
}