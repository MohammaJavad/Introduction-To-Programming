#include<iostream>
using namespace std;

int main()
{
    int n=5;
    int inp;
    int mmax=0;
    
    int i=1;
    while(i<=n)
    {
        cin>>inp;
        if(inp>mmax)
        {
            mmax=inp;
        }
        i++;
    }
    cout<<"max="<<mmax<<endl;


    // int n=5;
    // int inp;
    // cin>>inp;
    // int mmax=inp;
    // int i=1;
    // while(i<n)
    // {
    //     cin>>inp;
    //     if(inp>mmax)
    //     {
    //         mmax=inp;
    //     }
    //     i++;
    // }
    // cout<<"max="<<mmax<<endl;



    // int n=5;
    // int inp;
    // int mmax=0;
    
    // int i=1;
    // while(i<=n)
    // {
    //     cin>>inp;
    //     if(inp>mmax)
    //     {
    //         mmax=inp;
    //     }
    //     i++;
    // }
    // cout<<"max="<<mmax<<endl;





 
}