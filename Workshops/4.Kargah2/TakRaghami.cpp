#include <iostream>
using namespace std;

int main()
{
    long long int num;
    cin >> num;
    
    while (num >= 10)
    {
        int sum = 0;
        while (num > 0)
        {
            sum = sum + (num%10);
            num = num / 10;
        }
        num = sum;
    }
    
    
    
    cout << num;
}