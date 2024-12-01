#include <iostream>
using namespace std;

int main()
{
    float Digital, Madar, Signal;
    cin >> Digital >> Madar >> Signal;
    float Moadel= (Digital+Madar+Signal)/3;
    if (Moadel>=17)
    {
        cout << "afarin!";
    } else cout << "kheng!";
    
    return 0;
}

