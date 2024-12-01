#include <iostream>
using namespace std;

int main()
{
    int n;
    int m;
    cin >> n;
    cin >> m;
    int counter = 0;
    int temp = m;
    for (int i = 0; i < n-1; i++)
    {
        cin >> m; 
        if (temp!=m)
        {
            counter++;
        }
        temp = m;
    }
    cout << counter << endl;
}