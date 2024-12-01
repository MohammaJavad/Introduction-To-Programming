#include<iostream>
using namespace std;

int main()
{
    
    char inp;
    cout<<"Are youmarried?(y/n)   ";
    // bool is_married=true;
    bool is_married;
    cin>>inp;
    if(inp=='y' or inp=='Y')
    {
        is_married=true;
    }
    else if(inp=='n')
    {

        is_married=false;
    }
    else{
        cout<<"Are youmarried?(y/n)   ";
        cout<<"please choose y or n"<<endl;
        cin>>inp;
    }





    int salary=10000;
    int n_child=2;
    float tax;
    float golestan_grade;
    // tax=0.1*salary;
    if(salary>50000)
    {
        tax=0.4*salary;
    }
    else if(salary>10000 && salary<=50000)
    {
        tax=0.3*salary;
    }
    else if(salary>8000 && salary>=10000)
    {
        tax=0.2*salary;
    }
    else if(salary>5000 && salary >=8000)
    {
        tax=0.1*salary;
    }
    // else
    // {
    //     tax=0;
    // }

    // if(is_married==true)
    if(is_married)
    {
        tax/=2;
    }

    tax/=n_child;


    cout<<"tax=  "<<tax<<endl;
    


}