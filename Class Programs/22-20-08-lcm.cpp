#include<iostream>
using namespace std;

int main()
{
    int a=24;
    int b=84;
    int max_a_b;
    // if(a<b)
    //     min_a_b=a;
    // else
    //     min_a_b=b;

    max_a_b=a>b ? a : b;

    long long int i=a*b;
    long long int lcm=a*b;
    while (i>=max_a_b)
    {
        if(i%a==0 && i%b==0)
        {
            lcm=i;
        }
        i-=max_a_b;
    }
    cout<<lcm<<endl;


    // int i=max_a_b;
    // while (!(i%a==0 && i%b==0))
    //     i+=max_a_b;
    // cout<<i<<endl;
    
        

}