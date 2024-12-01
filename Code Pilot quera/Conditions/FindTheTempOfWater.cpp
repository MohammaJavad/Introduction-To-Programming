#include <iostream>
using namespace std;

int main()
{
    int Celsius;
    cin >> Celsius;
    if (Celsius>100)
    {
        cout << "Steam" << endl;
    } else if (Celsius<0)
    {
        cout << "Ice" << endl;
    } else cout << "Water" << endl;
}