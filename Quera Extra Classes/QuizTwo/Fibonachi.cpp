#include <iostream>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int i = 0;
    long long int a = 1;
    long long int b = 1;
    long long int c = 1;
    while (i < (n-2))
    {
        c = a + b;
        a = b;
        b = c;
        //cout << c << endl;
        i++;
    }
    cout << c;
    
}