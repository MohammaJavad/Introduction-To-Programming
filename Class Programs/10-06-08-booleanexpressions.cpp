#include<iostream>
using namespace std;

int main()
{
    int x=2;
    int z;
    z=x+3*x*x;
    //boolean expression   
    //comparison operator  >  <   >=  <=  ==   !=
    bool t;
    t= x>3;
    t= (x == 2);
    t= (x != 2);

    // equality of two floats   u== 3.14


    cout<<t<<endl;
    
    t=(x=3);
    x=0;
    t=(x=0);
    cout<<t<<endl;
    // logical operators   &&   ||  !
    int y=1000;
    t= (x<-5) && y>100;  // && and 
    cout<<t<<endl;
    t= (x<-5) || y>100;  // ||  or
    cout<<t<<endl;
    t= ! x<-5 ;  // ||  or
    cout<<t<<endl;



}