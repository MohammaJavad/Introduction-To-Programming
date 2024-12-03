#include <iostream>
using namespace std;

int NumberDigit (int n)
{
    int counter=0;
    for (int i = n; i > 0; i/=10)
    {
        counter++;
    }
    return counter;
}

int ReverseDigit (arr[8])

int main()
{
    cout << NumberDigit(1234) << endl;
}