#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int inp = 0;
    cin >> inp;
    int min=inp, max=inp;
    for (int i = 0; i < (n-1); i++)
    {
        cin >> inp;
        if (inp>max)
        {
            max = inp;
        }
        if (min>inp)
        {
            min = inp;
        }
    }
    cout << abs(max-min) << endl;
}