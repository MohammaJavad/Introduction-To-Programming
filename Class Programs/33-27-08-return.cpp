#include<iostream>
#include<cmath>
using namespace std;

// bool isPrime(int n)   // n paramter
// {
//     int i=3;
//     if(n==2)
//         return true;
//     if(n==1 || n%2==0)
//         return false;
//     while (i<=sqrt(n))
//     {
//         if (n%i==0)
//         {
//            return false;
//         }
//         i+=2;
//     }
//     return true;
// }



void isPrime()   // n paramter
{
    int n;
    cin>>n;
    int i=2;
    if(n==1)
    {
        cout<< "false";
        return;
    }
    while (i<=sqrt(n))
    {
        if (n%i==0)
        {
           cout<< "false";
           return;
        }
        i++;
    }
    cout<< "true";
    return;
}




int main()
{
    // isPrime(26);
    // cout<<isPrime(83)<<endl;
    isPrime();

}