#include<iostream>
using namespace std;

int main()
{
    // int n=5;


    int i;


    // i=1;
    // while(i<=n)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }

    // for(i=1;i<=n;i++)
    // {
    //     cout<<i<<endl;
    // }


    // int n=623547;
    // while(n>0)
    // {
    //     cout<<n%i;
    //     n/=10;
    // }

    int n=623547;
    for(;n>0;n/=10)
    {
        cout<<n%10<<" ";
        
    }



}