#include <iostream>
using namespace std;

int main()
{
    float X, Y, Z;
    cin >> X >> Y >> Z;
    if (X==0 and Y==0 and Z==0)
    {
        cout << "NoghteH SefR";
    } else if (X>0 and Y>0 and Z>0)
    {
        cout << 1;
    } else if (X<0 and Y>0 and Z>0)
    {
        cout << 2;
    } else if (X<0 and Y<0 and Z>0)
    {
        cout << 3;
    } else if (X>0 and Y<0 and Z>0)
    {
        cout << 4;
    } else if (X>0 and Y>0 and Z<0)
    {
        cout << 5;
    } else if (X<0 and Y>0 and Z<0)
    {
        cout << 6;
    } else if (X<0 and Y<0 and Z<0)
    {
        cout << 7;
    } else if (X>0 and Y<0 and Z<0)
    {
        cout << 8;
    } 
    
    
    return 0;
}

