#include <iostream>
#include <cmath>
using namespace std;

bool primeCheker (int n)
{
    bool result = true;
    if (n%2==0)
    {
        result=false;
    } else for (int i = 3; i <= sqrt(n); i+=2)
        {
            if (n%i==0)
            {
                result=false;
                break;
            }
        
        }
    return result;
}
int sumOfPrime(int n)
{
    int sum = 0;
    if (primeCheker(n))
    {
        sum = n;
        return sum;
    }
    
    if (n%2==0)
    {
        sum+=2;
    }
    
    for (int i = 3; n >= i ; i+=2)
    {

        if (n%i==0 and primeCheker(i))
        {
            sum+=i;
        }
    }
    
    return sum;
}
int main()
{
    int n;
    cin >> n;
    for (int i = n; ; i++)
    {
        if (sumOfPrime(i)>=(sumOfPrime(n))*5)
        {
            cout << i << endl;
            break;
        }
    }    
}
