#include <iostream>
using namespace std;

int main() 
{
    int m,n;
    cin>>m>>n;
    if (m%2==n%2)
    {
        cout << m*n;
    } else cout << m%n;
    
}