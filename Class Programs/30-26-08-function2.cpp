#include<iostream>
#include<cmath>
using namespace std;


//function declaration/prototype
bool isPrime(int );



int main()
{
    int n;
    n=228;
    int a;
    // int b;
    bool flag=false;
    // bool is_prime_a,is_prime_b;

    a=1;
    while (a<=n/2)
    {
        // b=n-a;
       //call/invoke/execute
        // is_prime_a=isPrime(a);
        // is_prime_b=isPrime(b);

        if(isPrime(a) && isPrime(n-a))  // a argument
        {
            cout<<n<<"="<<a<<"+"<<n-a<<endl;
            flag=true;
            break;
        }
        a++;
    }
    if(!flag)
        cout<<"impossible"<<endl;
    return 0;

}



// function   definition/implementation
bool isPrime(int n)   // n paramter
{
    int i=2;
    bool is_prime_n=true;
    while (i<=sqrt(n))
    {
        if (n%i==0)
        {
            is_prime_n=false;
            break;
        }
        i++;
    }
    if(n==1)
        is_prime_n=false;
    return is_prime_n;
}
    