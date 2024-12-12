#include <iostream>
#include <cmath>
using namespace std;

int GDC(int a, int b)
{
    a=abs(a);
    b=abs(b);
    int GDC=0;
    int min;
    if (a<b)
    {
        min=a;
    } else min=b;
    
    GDC=1;
    for (int i = min; i > 1; i--)
    {
        if (a%i==0 and b%i==0)
        {
            return GDC=i;
        }  
    }
    return GDC;
}

int LCM(int a, int b, int GDC)
{
    return abs(a)*abs(b)/GDC;
}

int main()
{
    //cout << LCM(-6, 7, GDC(-6, 7)) << endl;
    int teachers[5];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> teachers[i];
    }
    int Days = LCM(teachers[0], teachers[1], GDC(teachers[0], teachers[1]));
    for (int i = 2; i < n; i++)
    {
        Days=LCM(Days, teachers[i], GDC(Days, teachers[i]));
    }
    cout << Days%30+1 << endl; 
}