#include <iostream>
using namespace std;

void test1(int x)
{
    x*=2;
}
void test2(int* p)
{
    // *p=100;
    *p*=100;
}
void test3(int& y)
{
    // *p=100;
    y*=100;
}

void swap(int* p1,int* p2)
{
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}



int main() {
    int x=123;
    cout<<&x<<endl;   // address of
    cout<<&x+1<<endl;   // address of

    int* p;
    p=&x;
    cout<<p<<endl;
    cout<<*p<<endl;  // value at address
    cout<<"################"<<endl;
    cout<<x<<endl;
    test1(x);
    cout<<x<<endl;
    test2(&x);
    cout<<x<<endl;
    test3(x);
    cout<<x<<endl;



    cout << "Hello, World!" << endl;
    return 0;
}
