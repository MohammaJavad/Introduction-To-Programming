#include<iostream>
using namespace std;

int main()
{
    int n=23;
    int i=2;
    bool is_prime=true;
    while(i<n)
    {
        if (n%i==0)
        {
            is_prime=false;
        }
        i++;
    }
    if(is_prime)
        cout<<n<<" is prime"<<endl;
    else
        cout<<n<<" is not prime"<<endl;


    // int n=65;
    // int i=2;
    // while(i<n)
    // {
    //     if (n%i==0)
    //     {
    //         cout<<n<<" is not prime"<<endl;
    //         i=n;
    //     }
    //     i++;
    // }
    // if(i==n)
    //     cout<<n<<" is prime"<<endl;
        


}