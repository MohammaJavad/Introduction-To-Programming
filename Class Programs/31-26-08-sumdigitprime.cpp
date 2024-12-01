#include<iostream>
#include<cmath>
using namespace std;


//function declaration/prototype
bool isPrime(int );
int sumDigits(int n);



int main()
{
    int n=654;
    int m=17;
    int counter=0;

    // while (counter<m)
    // {
    //     if (isPrime(n) && isPrime(sumDigits(n)))
    //         counter++;
    //     n++;
    // }
    // cout<<n-1<<endl;


     while (true)
    {
        if (isPrime(n) && isPrime(sumDigits(n)))
            counter++;
        if (counter==m)
            break;
        n++;
    }
    cout<<n<<endl;

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


int sumDigits(int n)
{
    int ss=0;
    while(n>0)
    {
        ss+=n%10;
        n/=10;
    }
    return ss;
}
    