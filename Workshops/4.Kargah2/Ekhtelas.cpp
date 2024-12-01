#include <iostream>
using namespace std;

int main()
{
    int n=0;
    cin >> n;
    int i = 0;
    int MaxMoney = 0;
    string Criminal;
    while (i < n)
    {
        int money;
        string name;
        cin >> name >> money;
        if (money >= MaxMoney)
        {
            MaxMoney = money;
            Criminal = name;
        }
        i++;
    }
    cout << Criminal << endl;
    
}