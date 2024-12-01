#include <iostream>
using namespace std;

int main()
{
    string number;
    cin >> number;
    string Num = number;
    std::reverse(number.begin(), number.end());
    if (Num == number)
    {
        cout << "YES";
    } else cout << "NO";
    
}