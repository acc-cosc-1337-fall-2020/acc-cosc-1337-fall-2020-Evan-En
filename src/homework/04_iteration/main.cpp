//write include statements
#include<iostream>
#include "dna.h"
//write using statements
using std::string;
using std::cout;
/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int op = 0;
	char con = 'y';
	while(con == 'y' || con == 'Y')
	{
		cout<<"Enter 1 for GC content. Enter 2 for DNA complement."<<"\n";
		std::cin>>op;
		if(op == 1)
		{
			cout<<"Enter DNA"<<"\n";
			string DNA;
			std::cin>>DNA;
			cout<<get_gc_content(DNA)<<"\n";
		}
		if(op == 2)
		{
			cout<<"Enter DNA"<<"\n";
			string DNA;
			std::cin>>DNA;
			cout<<get_dna_complement(DNA)<<"\n";
		}
		cout<<"Enter y to continue. Enter n to stop."<<"\n";
		std::cin>>con;
	}
	return 0;
}