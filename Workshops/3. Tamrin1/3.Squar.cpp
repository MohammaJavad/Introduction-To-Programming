#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
        if (num > 1)
    {
        for (int i = 0; i < num; i++)
        {
            cout << "*";
        }
            cout << endl;
        for (int i = 0; i < (num - 2); i++)
        {
            cout << "*" << string((num-2), ' ') << "*" << endl;
        }
        for (int i = 0; i < num; i++)
        {
            cout << "*";
        }
            cout << endl;
    } else cout << "*" << endl;

    
    
    
}