#include <iostream>
using namespace std;

int main()
{
    int n;
    int t;
    int d;
    cin >> n >> t >> d;
    if (n <= t)
    {
        cout << n*d << endl;
    } else cout << t*d << endl;
    
}