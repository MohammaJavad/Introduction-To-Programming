#include<iostream>
using namespace std;

int main()
{
    int a=24;
    int b=84;
    int min_a_b;
    // if(a<b)
    //     min_a_b=a;
    // else
    //     min_a_b=b;

    min_a_b=a<b ? a : b;

    // int i=1;
    // int gcd=1;
    // while (i<=min_a_b)
    // {
    //     if(a%i==0 && b%i==0)
    //     {
    //         gcd=i;
    //     }
    //     i++;
    // }
    // cout<<gcd<<endl;


    int i=min_a_b;
    while (!(a%i==0 && b%i==0))
        i--;
    cout<<i<<endl;
    
        

}