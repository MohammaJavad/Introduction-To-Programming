#include <iostream>
using namespace std;



void test1(int a)
{
    a*=100;
    cout<<"in test function a="<<a<<endl;
}




void test3(int& a)
{
    a*=100;
    cout<<"in test function a="<<a<<endl;
}



int test2(int a)
{
    a*=100;
    cout<<"in test function a="<<a<<endl;
    return a;
}








int main() {
    
    int x=10;

    int& ref=x;


    cout<<ref<<endl;

    ref++;

    cout<<x<<endl;

    x*=2;

    cout<<ref<<endl;

    int &t=ref;

    t++;
    cout<<x<<endl;

    test1(x);
    cout<<x<<endl;


    x=test2(x);
    cout<<x<<endl;



    test3(x);
    cout<<x<<endl;




    cout << "Hello, World!" << endl;
    return 0;
}
