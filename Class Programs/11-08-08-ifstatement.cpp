#include<iostream>
using namespace std;

int main()
{
    
    float midterm_grade;
    cout<<"midterm grade   :";
    cin>>midterm_grade;

    if (midterm_grade<0 or midterm_grade>20)
    {
        cout<<"grade must be a number between 0 and 20"<<endl;
        cout<<"midterm grade   :";
        cin>>midterm_grade;
        if (midterm_grade<0 or midterm_grade>20)
        {
            cout<<"grade must be a number between 0 and 20"<<endl;
            cout<<"midterm grade   :";
            cin>>midterm_grade;
        }
    }




    float final_grade;
    cout<<"final grade   :";
    cin>>final_grade;

    float golestan_grade;
    golestan_grade=0.4*midterm_grade+0.6*final_grade;
    if(final_grade>=1.2*midterm_grade)
    {
        golestan_grade=0.3*midterm_grade+0.7*final_grade;
    }
    else if (midterm_grade>=1.2*final_grade)
    {
        golestan_grade=0.5*midterm_grade+0.5*final_grade;
    }
    

    cout<<"golestan grade  "<<golestan_grade<<endl;

}