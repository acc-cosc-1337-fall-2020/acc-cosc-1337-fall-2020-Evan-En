//Write the include statement for decision.h here
#include "decision.h"
//Write namespace using statements for cout and cin
#include<iostream>
using std::cout; using std::cin; using std::endl;
int main() 
{
	int grade;
	cout << "Enter your grade: ";
	cin >> grade;
	cout << "If Letter Grade: " << get_letter_grade_using_if(grade) << endl;
	cout << "Switch Letter grade: " << get_letter_grade_using_switch(grade);
	return 0;
}

