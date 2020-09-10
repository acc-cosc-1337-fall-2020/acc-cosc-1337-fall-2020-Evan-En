//Write the include statement for types.h here
#include "types.h"
//Write include for capturing input from keyboard and displaying output to screen
#include<iostream>
using namespace std;

int main() 
{
	int num;
	int num1;
	cout << "Enter a number: ";
	cin >> num;
	cout << "Enter a number: ";
	cin >> num1;
	int result = multiply_numbers(num, num1);
	//cout << result << endl;
	//int num1 = 4;
	//result = multiply_numbers(num1);
	cout << "Result: " << result;
	return 0;
}

