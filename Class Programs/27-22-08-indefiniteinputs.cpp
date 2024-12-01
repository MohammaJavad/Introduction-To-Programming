#include<iostream>
using namespace std;

int main()
{
    string inp;
    int x;
    int mmax=0;
    while (true)
    {
        cin>>inp;
        if (inp=="end")
            break;
        x=stoi(inp);
        if(x>mmax)
            mmax=x;
    }
    cout<<mmax<<endl;

    string inp;
    cin>>inp;
    int x;
    int mmax=0;
    while (inp!="end")
    {
        //main code;
        x=stoi(inp);
        if(x>mmax)
            mmax=x;
        cin>>inp;
    }
    cout<<x;

}