#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    long long int a,b,c,other,MAX;
    cin>>a>>b>>c;
    long long int A=pow(a, 2); 
    long long int B=pow(b, 2); 
    long long int C=pow(c, 2);
    
    if (a+b>c and a+c>b and b+c>a)
    { if (A>=B){
        MAX=A;
    } else {
        MAX=B;
    }
    if (MAX<=C){
        MAX=C;
    }

    //cout << MAX;


    if (MAX==A)
    {
        other = B+C;
    } else if (MAX==B)
    {
        other = A+C;
    } else if (MAX==C)
    {
        other = B+A;
    }




    if (MAX==other)
    {
        cout << "right triangle";
    } else if (MAX<other) 
    {
        cout << "acute triangle";
    } else if (MAX>other)
    {
        cout << "obtuse triangle";
    }

    } else cout << "invalid triangle";

    
    
    
    

}