#include<iostream>
using namespace std;

int main()
{
    // cout<<1<<endl;
    // cout<<2<<endl;
    // cout<<3<<endl;
    // cout<<4<<endl;
    // cout<<5<<endl;


    // int i=2;
    // while(i<=50)
    // {
    //     cout<<i<<endl;
    //     i+=2;
    // }
    // cout<<"end of job!"<<endl;



    // float midterm_grade;
    // cout<<"midterm grade   :";
    // cin>>midterm_grade;

    // while (midterm_grade<0 || midterm_grade>20)
    // {
    //     cout<<"grade must be a number between 0 and 20"<<endl;
    //     cout<<"midterm grade   :";
    //     cin>>midterm_grade;
        
    // }
    // cout<<"end of job!"<<endl;


// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5



    int i=1;
    while(i<=5)
    {
        cout<<i<<"";
        i++;
    }

    int j=1;
    while(j<=5)
    {
       int i=1;
        while(i<=j)
        {
            cout<<i<<" ";
            i++;
        }
        cout<<endl;

        j++;
    }
    


}