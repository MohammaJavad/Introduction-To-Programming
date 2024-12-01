#include<iostream>
using namespace std;


int gcd(int a, int b)
{
    int min_a_b;
    min_a_b=a<b ? a : b;
    int i=min_a_b;
    while (!(a%i==0 && b%i==0))
        i--;
    return i;
}


int main()
{
    int a=24;
    int b=84;
    cout<<gcd(a,b)<<endl;
}