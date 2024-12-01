#include<iostream>
using namespace std;

int main()
{
    int n=72675;
    int i;
    int greatest_divisor=1;
    // i=1;
    // while (i<n)
    // {
    //     if(n%i==0)
    //     {
    //         greatest_divisor=i;
    //     }
    //     i++;
    // }
    // cout<<greatest_divisor<<endl;


    i=n/2;
    while (! (n%i==0))
    {
        i--;
    }
    cout<<i<<endl;
 
}