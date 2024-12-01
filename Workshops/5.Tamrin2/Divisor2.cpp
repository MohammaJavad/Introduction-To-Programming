#include <iostream>
using namespace std;

struct resulttype{
    int counter;
    int sum;
};
resulttype Divisor(int n)
{
    int counter=1;
    int sum=0;
    for (int i = 1; i <= (n/2); i++)
    {
        if (n%i==0)
        {
            counter++;
            sum+=i;
        }
    }
    resulttype result;
    result.counter = counter;
    result.sum = sum;
    return result;
}


int main()
{
    int n;
    cin >> n;
    int Sum=0, Number=0;
    for (int i = n; i >= 1 ; i--)
    {
        int result2;
        auto resultstruct = Divisor(i);
        Number+=resultstruct.counter;
        Sum+= resultstruct.sum;
    }
    cout << Number << " " << Sum << endl;
}