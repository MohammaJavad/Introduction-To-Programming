#include <iostream>
using namespace std;

int Divisor(int n)
{
    int counter = 0;
    for (int i = 1; i <= n; i++)
    {
       if (n%i==0)
       {
        counter++;
       }
       
    }
    return counter;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; ; i++)
    {
        long long int J = Divisor(i);
        if (J>=n)
        {
            cout << i << endl;
            break;
        }  
    }
}