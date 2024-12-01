#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cin >> a >> b;
    int MIN;
    if (a>b)
    {
        MIN = b;
    } else MIN = a;

    for (int i = MIN; i >= 1; i--)
    {
        if (a%i == 0 and b%i == 0)
        {
            cout << i << " " << (a/i)*b << endl;
            break;
        }
        
    }
    
    
}