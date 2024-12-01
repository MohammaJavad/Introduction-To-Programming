#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long int num;
    cin >> num;
    long long int temp = num;
    long long int answer = 0;
    while (num > 0)
    {
        long long int Factoriel = 1;
        int Digit = 0;
        Digit = num%10;
        while (Digit>0)
        {
            Factoriel = Factoriel*Digit;
            Digit--;
        }
        answer = answer + Factoriel;
        num = num/10;
    }
    
    //answer = 1;
    answer = abs(answer - temp);
    //cout << answer;
    int is_prime = 1; // 1 means it is prime
    if ((answer%2)==0 and answer != 2)
    {
        is_prime = 0;
    } else if ((answer%2)!=0 or answer == 2)
    {
        long long int i = 3;
        while (i < ((answer+1)/2))
        {
            if (answer%i == 0)
            {
                is_prime = 0;
            }
            i = i + 2;  
        }
            
    }
     if (is_prime==1)
    {
        cout << "yesprime";
    } else cout << "noprime";
    
    
    
}