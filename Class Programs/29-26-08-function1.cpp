#include<iostream>
#include<cmath>
using namespace std;









int main()
{
    int n;
    n=23;
    int a,b;
    bool flag=false;

    a=1;
    while (a<=n/2)
    {
        b=n-a;
        int i=2;
        bool is_prime_a=true;
        // is a prime?
        while (i<=sqrt(a))
        {
            if (a%i==0)
            {
                is_prime_a=false;
                break;
            }
            i++;
        }
        if(a==1)
            is_prime_a=false;

        bool is_prime_b=true;
        i=2;
        // is b prime?
        while (i<=sqrt(b))
        {
            if (b%i==0)
            {
                is_prime_b=false;
                break;
            }
            i++;
        }
        if(b==1)
            is_prime_b=false;

        if(is_prime_a && is_prime_b)
        {
            cout<<n<<"="<<a<<"+"<<b<<endl;
            flag=true;
            break;
        }
        a++;
    }
    if(!flag)
        cout<<"impossible"<<endl;
 

}