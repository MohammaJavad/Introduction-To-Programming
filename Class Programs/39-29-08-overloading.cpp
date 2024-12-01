#include<iostream>
using namespace std;

void greet()
{
    cout<<"Hi"<<endl;
}


void greet(string name)
{
    cout<<"Hi "<<name<<endl;
}

void test(int x)
{
    cout<<"int"<<x<<endl;

}

void test(double x)
{
    cout<<"double"<<x<<endl;

}


int main()
{
    string name;
    cin>>name;
    greet(name);
    // greet('x');
    test(1234.7653);
    test(1234);
}