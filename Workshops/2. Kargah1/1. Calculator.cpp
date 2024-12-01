#include <iostream>
using namespace std;

int main() 
{
    char Alamat;
    cin >> Alamat;
    int A, B;
    cin >> A >> B;
    if (Alamat == '+')
    {
       cout << A+B; 
    }
    
    if (Alamat == '-')
    {
       cout << A-B; 
    }

    if (Alamat == '*')
    {
       cout << A*B; 
    }

    if (Alamat == '/')
    {
       if (B != 0)
       {
        cout << A/B; 
       } else cout << "impossible" << endl;
    }
}