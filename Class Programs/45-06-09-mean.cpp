#include<iostream>
using namespace std;



void PrintArray(int a[],int size)
{
    cout<<"#############"<<endl;
    for (int i = 0; i < size; i++)
    {
       cout<<a[i]<<endl;
    }
}



void DoubleArray(int a[],int size)
{
    for (int i = 0; i < size; i++)
    {
       a[i]*=2;
    }
}




int main()
{
    const int size=5;
    int grade[size];
    int ss=0;
    for (int i = 0; i < size; i++)
    {
       cin>>grade[i];
       ss+=grade[i];
    }
    PrintArray(grade,size);
    cout<<"############"<<endl;
    // float average=(float)ss/size;
    // for (int i = 0; i < size; i++)
    // {
    //     if(grade[i]<average)
    //         cout<<grade[i]<<endl;
    // }
    DoubleArray(grade,size);
    cout<<"############"<<endl;
    PrintArray(grade,size);
    string({'B'});
    cout<<grade;
    
    


}