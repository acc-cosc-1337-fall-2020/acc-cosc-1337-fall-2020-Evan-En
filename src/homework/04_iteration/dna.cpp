#include "dna.h"
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const std::string str)
{
    double gc = 0.0;
    for(char c: str)
    {
        if(c == 'G' || c == 'C')
        {
            gc++;
        }
    }
    return gc/str.size();
}



/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
std::string get_reverse_string(std::string str)
{
    std::string ret = str;
    int count = 0;
    for(int i = str.size()-1; i >= 0; i--)
    {
        ret[count] = str[i];
        count++;
    }
    return ret;
}


/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/
std::string get_dna_complement(std::string str)
{
    std::string comp = get_reverse_string(str);
    for(int i = 0; i < comp.size(); i++)
    {
        switch(comp[i])
        {
            case 'A':
                comp[i] = 'T';
                break;
            case 'T':
                comp[i] = 'A';
                break;
            case 'C':
                comp[i] = 'G';
                break;
            case 'G':
                comp[i] = 'C';
                break;
        }
    }
    return comp;
}

