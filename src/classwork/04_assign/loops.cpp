//cpp
int factorial(int num)
{
    int ret = 1;
    for(int i = 1; i <= num; i++)
    {
        ret = ret * i;
    }
    return ret;
}