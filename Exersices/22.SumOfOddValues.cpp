#include <iostream>
using namespace std;

int main()
{
    int O,T,Th,F,Fv;
    cin>>O>>T>>Th>>F>>Fv;
    //int O1,O2,O3,O4,O5;
    if (O%2==0)
    {
        O=0;
    } 
    
    if (T%2==0)
    {
        T=0;
    }

    if (Th%2==0)
    {
        Th=0;
    }

    if (F%2==0)
    {
        F=0;
    } 

    if (Fv%2==0)
    {
        Fv=0;
    }
    int sum=O+T+Th+F+Fv;
    cout<< "The sum of the odd numbers are: " << sum << endl;
}