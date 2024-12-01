#include <iostream>
using namespace std;

int main()
{
    int t, a, b, h, N;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> h;
        int temp = h;
        int counter = 0;
        do
        {
            if (temp!=h)
            {
                h+=b;
            }
            h-=a;
            counter++;
        } while (h>0);
        {
            cout << counter << endl;
        }
        
    }
    
}