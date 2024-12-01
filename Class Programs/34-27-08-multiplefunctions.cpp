#include<iostream>
using namespace std;


void func3()
{
    cout<<"start func3"<<endl;
    cout<<"end func3"<<endl;
    return;
}
void func2()
{
    cout<<"start func2"<<endl;
    func3();
    cout<<"end func2"<<endl;
}

void func1()
{
    cout<<"start func1"<<endl;
    func2();
    cout<<"end func1"<<endl;
}




int main()
{
    func1();

}