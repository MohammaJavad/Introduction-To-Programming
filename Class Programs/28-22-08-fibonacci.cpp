#include<iostream>
using namespace std;

int main()
{
    int a=1;
    int b=1;
    int n=8;
    int c;

    int i=2;
    while (i<n)
    {
        c=a+b;
        b=a;
        a=c;
        i++;
    }
    cout<<c<<endl;

}