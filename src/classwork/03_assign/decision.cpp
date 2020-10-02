//cpp
char get_letter_grade_using_if(int grade)
{
    if(grade <= 100 && grade >= 90)
    {
        return 'A';
    }
    else if(grade <= 89 && grade >= 80)
    {
        return 'B';
    }
    else if(grade <= 79 && grade >= 70)
    {
        return 'C';
    }
    else if(grade <= 69 && grade >= 60)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }
}
char get_letter_grade_using_switch(int grade)
{
    grade = grade/10;
    switch(grade)
    {
        case 10: return 'A';
        case 9: return 'A';
        case 8: return 'B';
        case 7: return 'C';
        case 6: return 'D';
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            return 'F';
            break;
        default: return 'I';//invalid message use string
    }
}