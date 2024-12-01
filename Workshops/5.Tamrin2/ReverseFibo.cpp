#include <iostream>
using namespace std;

int fibo(int n)
{
    if (n==1 or n==2)
    {
        return 1;
    } else return fibo(n-1)+fibo(n-2);
}


int main()
{
    int n, m;
    cin >> n >> m;
    int index=0;
    for (int i = 1; ; i++)
    {
        int j = fibo(i);
        if (j==n)
        {
            index=i;
            break;
        }      
    }

    for (int i = index; i > 0; i--)
    {
        cout << fibo(i) << endl;
    }
    
}