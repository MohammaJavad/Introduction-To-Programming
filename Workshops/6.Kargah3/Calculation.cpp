#include <iostream>
#include <cmath>
using namespace std;

int Factoriel (int n)
{
    if (n==0)
    {
        return 1;
    }
    
    return n*Factoriel(n-1);
}

int main()
{
    // int x, a, n;
    // cin >> x >> a >> n;
    // int Sigma = 0;
    // for (int i = 0; i <= n; i++)
    // {
    //     Sigma+=((Factoriel(n)/(Factoriel(i)*Factoriel(n-i)))*pow(x,i)*pow(a,(n-i)));
    // }
    // cout << Sigma << endl;
    cout << Factoriel(5);
}