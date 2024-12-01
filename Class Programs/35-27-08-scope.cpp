#include<iostream>
using namespace std;

int a=100;  //global variable


int test1(int n)
{
    int a=10;
    a*=2;
    n++;
    return n;
}


int test2(int n)
{
    int a=10;
    a*=2;
    n++;
    static int w=17;
    w++;
    cout<<"w="<<w<<endl;
    return n;
}


int main()
{
    int n=5;
    cout<<a<<endl;
    cout<<n<<endl;
    cout<<test1(n)<<endl;
    cout<<n<<endl;
    cout<<a<<endl;
    if(true)
    {
        int k=12;
    }
    // cout<<k<<endl;
    test2(7);
    test2(7);
    test2(7);
    test2(7);
    cout<<w<<endl;




}