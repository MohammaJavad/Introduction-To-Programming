#include <iostream>
using namespace std;

int main()
{
    int X, N;
    cin >> X >> N;
    if (N==0)
    {
        cout << 20;
    } else if (N==7)
    {
        cout << X;    
    } else {
        for (int i = N; i > 0; i--)
        {
            X--;
        }
        if (X>=0)
        {
            cout << X;
        } else cout << 0;
        
    }
    
    
}