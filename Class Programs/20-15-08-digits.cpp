#include<iostream>
using namespace std;

int main()
{
    // int n=2345234;
    // int digit;
    // while(n>0)
    // {
    //     digit=n%10;
    //     cout<<digit<<endl;
    //     n/=10;
    // }


    // int n=2345234;
    // int digit;
    // int ss=0;
    // while(n>0)
    // {
    //     digit=n%10;
    //     ss+=digit;
    //     n/=10;
    // }
    // cout<<ss<<endl;


    int n=2345234;
    int digit;
    int ss=0;
    while(n>0)
    {
        digit=n%10;
        if (digit%2==0)
        {
            ss+=digit;
        }
        n/=10;
    }
    cout<<ss<<endl;
}