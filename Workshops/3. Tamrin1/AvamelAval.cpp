#include <iostream>
using namespace std;

int main()
{
    long long int n=1575;
    //cin >> n;
    int counter2 = 0;
    for (; n%2==0; n/=2)
    {
        counter2++;
    }
    if (counter2==1)
    {
        cout << 2;
    } else if (counter2==0)
    {

    } else cout << 2 << "^" << counter2;
    
    int counter = 0;
    int lastFactor = 3;
    int lastCounter = 0;
    int i = 3;
    for (; n>1 ; i+=2)
    {
        if (lastFactor!=i)
        {
            if (counter==1)
            {
                if (counter2!=0 or lastCounter!=0)
                {
                    cout << "*";
                }
                cout << (i-2);
                lastCounter = counter;
            } else if (counter == 0){

            } else {
                if (counter2==0 and lastCounter==0)
                {
                    cout << (i-2) << "^" << counter;
                } else cout << "*" << (i-2) << "^" << counter;
                lastCounter = counter;
            }
            counter=0;
        }

        // counter = 0;
        for (; (n%i==0 and n>0); n/=i)
        {
            counter++;
            lastFactor = i;
        }
    }

    if (lastFactor!=i)
        {
            if (counter==1)
            {
                if (counter2==0 and lastCounter==0)
                {
                    cout << (i-2);
                } else cout << "*" << (i-2);
            } else if (counter == 0){

            } else {
                if (counter2==0 and lastCounter==0)
                {
                    cout << (i-2) << "^" << counter;
                } else cout << "*" << (i-2) << "^" << counter;
            }
            counter=0;
        }
}