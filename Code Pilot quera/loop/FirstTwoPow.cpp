#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    for (int i = 0; ; i++)
    {
        long long int sum = pow(2, i);
        if (sum>=n)
        {
            cout << sum << endl;
            break;
        }
        
    }
    
}