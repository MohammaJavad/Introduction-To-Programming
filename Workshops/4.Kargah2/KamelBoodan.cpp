#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int Divisor = num/2;
    int sum = 0;
    while (Divisor > 0)
    {
        
        if (num%Divisor == 0)
        {
            sum = sum + Divisor;
        }
        
        Divisor--;
    }
    
    if (sum == num)
    {
        cout << "YES";
    } else cout << "NO";
    
    
}