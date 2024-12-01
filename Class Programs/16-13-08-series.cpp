#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    const double PI=3.14159265358979323846;
    int n=1000;
    int i=1;
    double ss=0;

    while (i<=n)
    {
        ss+=1./(i*i);
        i++;
    }
    cout<<ss<<" "<<endl;
    cout<<(PI*PI)/6<<endl;

}