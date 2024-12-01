#include <iostream>
using namespace std;

int main()
{
    int x1=0, x2=0, x3=0, temp3=0, temp1=0;
    int diff1, diff2;
    for (int i = 0; i < 1; i++)
    {
        cin >> x1 >> x2;
        diff1 = x2-x1;
    }
    while (true)
    {
        string n;
        cin >> n;
        if (n=="end")
        {
           break;
        } else {
            x3 = stoi(n);
            diff1 = x2-x1;
            if (temp3==0)
            {
                diff2=x3-x2;
            } else diff2=x3-temp3;
        }
        if (diff1>diff2)
        {
            temp3 = x3;
        } else 
        {
            if (temp3==0)
            {
                x1=x2;
                x2=x3;
            } else {
                x1=temp3;
                x2=x3;
            }
            temp3 = 0;
        }
    }
    if(diff1>diff2)
    {
        cout << x1 << " " << x2 << endl;
    } else cout << x1 << " " << x2 << endl;
}