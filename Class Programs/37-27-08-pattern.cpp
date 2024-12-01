#include<iostream>
using namespace std;

 string repeatString(string x,int a)
 {
    int i=1;
    string output="";
    while(i<=a)
    {
        output+=x;
        i++;
    }
    return output;
 }

int main()
{
    string x="ali";
    string y="reza";
    cout<<x+" "+y<<endl;
    cout<<repeatString("ali",3)<<endl;

    int n=10;
    int i=1;
    string el="#";
    cout<<repeatString(el,n)<<endl;
    while(i<=n-2)
    {
        cout<<el+repeatString(" ",n-2)+el<<endl;
        i++;
    }
    cout<<repeatString(el,n)<<endl;

}