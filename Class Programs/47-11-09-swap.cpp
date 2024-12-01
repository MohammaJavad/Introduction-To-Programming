#include <iostream>

using namespace std;


void swap1(int a, int b)
{
    int temp=a;
    a=b;
    b=temp;
    cout<<"a= "<<a<<"     b= "<<b<<endl;
}

void swap2(int& a, int& b)
{
    int temp=a;
    a=b;
    b=temp;
    cout<<"a= "<<a<<"     b= "<<b<<endl;
}


void compute(int radius,double& area, double& primeter)
{
    area=2*3.14*radius;
    primeter=radius*radius*3.14;
}



int main() {
    int u=234;
    int v=7874;

    // int temp=u;
    // u=v;
    // v=temp;

    swap1(u,v);

    cout<<"u= "<<u<<"     v= "<<v<<endl;
    swap2(u,v);

    cout<<"u= "<<u<<"     v= "<<v<<endl;

    swap(u,v);
    cout<<"u= "<<u<<"     v= "<<v<<endl;

    double a=0,p=0;
    compute(3,a,p);
    cout<<a<<"   "<<p<<endl;

    return 0;
}
