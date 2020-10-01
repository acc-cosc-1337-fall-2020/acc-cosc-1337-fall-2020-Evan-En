//write includes statements
#include<iostream>
#include "loops.h"
//write using statements for cin and cout
using std::cout; using std::cin;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	int num = 1;
	while(num!=0)
	{
		cout << "Enter a number, to stop enter 0." << "\n";
		cin >> num;
		if(num !=0)
		{
			cout << factorial(num) << "\n";
		}
	}
	return 0;
}