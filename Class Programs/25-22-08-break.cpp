#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    // int n=2;
    // int i=2;
    // bool is_prime=true;
    // while(i<=sqrt(n))
    // {
    //     if (n%i==0)
    //     {
    //         is_prime=false;
    //         break;
    //     }
    //     i++;
    // }
    // if(is_prime && n!=1)
    //     cout<<n<<" is prime"<<endl;
    // else
    //     cout<<n<<" is not prime"<<endl;

    int a=12;
    int b=74;
    int max_a_b=a>b ? a:b;
    int min_a_b=a<b ? a:b;
    int i=max_a_b;
    while (true)
    {
        if(i%min_a_b==0)
            break;
        i+=max_a_b;
    }
    cout<<i<<endl;


}