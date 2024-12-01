

int factorial(int x)
{
    int m=1;
    int i=1;
    while(i<=x)
    {
        m*=i;
        i++;
    }
    return m;
}