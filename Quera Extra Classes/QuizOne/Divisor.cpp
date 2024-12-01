#include <iostream>
using namespace std;

int NumberOfDivisor(int n)
{
    int counter = 0;
    for (int i = 1; i <= n ; i++)
    {
        if (n%i==0)
        {
            counter++;    
        }
        
    }
    return counter;
}

int main()
{
    int n;
    cin >> n;
    cout << NumberOfDivisor(n) << endl;
}