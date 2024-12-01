#include <iostream>
using namespace std;

int main()
{
    int n=11;
    //cin >> n;
    int sum = 0;
    while (n > 0)
    {
        sum = sum + (n%10);
        n = n / 10;
    }
    int Factoriel = 1;
    while (sum > 0)
    {
        Factoriel = Factoriel * (sum%10);
        sum = sum/10;
    }
    
    int num = Factoriel;
    int is_prime = 1;
    if ((num/2)==0)
    {
        is_prime = 0;
    } else {
        int i = 0;
        while (i < (num/2))
        {
            if (num%i == 0)
            {
                is_prime = 0;
            }
            
            i = i +2;
        }
        
    }
    
    if (is_prime==1)
    {
        cout << "yesprime";
    } else cout << "noprime";
    
}