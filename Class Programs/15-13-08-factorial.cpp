#include<iostream>
using namespace std;

int main()
{

    int n=19;
    int i;
    int my_factorial=1;
    i=1;
    while (i<=n)
    {
        my_factorial*=i;
        i++;
    cout<<my_factorial<<endl;
    }

}