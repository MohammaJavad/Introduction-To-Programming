#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    if (n1+n2>n3 and n2+n3>n1 and n1+n3>n2)
    {
        if ((n3*n3)==(n2*n2)+(n1*n1))
        {
            cout << "True";
        } else cout << "False";
    } else cout << "False";
    
    
}