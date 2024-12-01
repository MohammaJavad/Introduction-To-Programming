#include <iostream>
#include <cmath>
using namespace std;

long long int Factoriel (int n);

int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int XDiff = abs(x2-x1);
    int YDiff = abs(y2-y1);
    int SumDiff = XDiff + YDiff;
    cout << Factoriel(SumDiff)/(Factoriel(XDiff)*Factoriel(YDiff)) << endl;
}

long long int Factoriel (int n)
{
    if (n==0)
    {
        return 1;
    }
    
    return n*Factoriel(n-1);
}