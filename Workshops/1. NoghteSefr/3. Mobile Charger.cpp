#include <iostream>
using namespace std;

int main()
{
    int k;
    cin >> k;
    int time=0;
    for (int i=1; i <= k; i++)
    {
        time += i;
    }
    cout << time << endl;
    return 0;
}

