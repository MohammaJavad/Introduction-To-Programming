#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (((a+b+c)==180) and ((a!=0) and (b!=0) and (c!=0)))
    {
        cout << "Yes";
    } else cout << "No";
    
}