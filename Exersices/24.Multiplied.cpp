#include <iostream>
using namespace std;

int main()
{
    int F, S;
    cin >> F >> S;
    if (F%S==0 or S%F==0)
    {
        cout << "Multiplied" << endl;
    } else cout << "Not Multiplied" << endl;
}