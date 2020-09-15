//Write the include statement for types.h here
#include "types.h"
//Write include for capturing input from keyboard and displaying output to screen
#include<iostream>

using std::cout; using std::cin; using std::endl;

int main() 
{
	int num;
	int num1 = 4;
	cout << "Enter a number: ";
	cin >> num;
	
	int result = multiply_numbers(num);
	cout << result << endl;
	
	result = multiply_numbers(num1);
	cout << "Result: " << result;
	return 0;
}

