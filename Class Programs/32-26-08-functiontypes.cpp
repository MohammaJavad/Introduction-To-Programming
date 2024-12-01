#include<iostream>
using namespace std;

void greet1()
{
    cout<<"Welcome!"<<endl;
}



void greet2(string name)
{
    cout<<"Welcome "<<name<<endl;
}

string greet3(string name)
{
    return "Welcome "+name+"\n";
}

string greet4()
{
    return "Welcome!";
}

int main()
{
    greet1();
    greet2("ali");
    cout<<greet3("ali");
    cout<<greet4()<<endl;

}