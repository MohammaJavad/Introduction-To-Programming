#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n=2;
    int i=2;
    bool is_prime=true;
    while(i<=sqrt(n) && is_prime)
    {
        if (n%i==0)
        {
            is_prime=false;
        }
        i++;
    }
    if(is_prime && n!=1)
        cout<<n<<" is prime"<<endl;
    else
        cout<<n<<" is not prime"<<endl;



}