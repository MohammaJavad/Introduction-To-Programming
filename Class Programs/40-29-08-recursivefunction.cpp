#include<iostream>
using namespace std;

long long int factorial(int n)
{
    if(n==0)
        return 1;
    return n*(factorial(n-1));
}

long long int fibonacci(int n)
{
    if (n==1 || n==2)
        return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}

void printFactor(int n)
{
    int i=2;
    while(n%i!=0)
        i++;
    cout<<i<<" ";
    n=n/i;
    if (n>1)
        printFactor(n);
}



int main()
{
    cout<<factorial(30)<<endl;
    cout<<fibonacci(7)<<endl;
    printFactor(1876576);
}