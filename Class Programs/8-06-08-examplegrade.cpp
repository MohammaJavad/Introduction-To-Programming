#include<iostream>
using namespace std;

int main()
{
    const float midterm_coeff=0.4;
    const float final_coeff=0.6;
    
    float midterm_grade;
    cout<<"midterm grade   :";
    cin>>midterm_grade;

    float final_grade;
    cout<<"final grade   :";
    cin>>final_grade;

    float golestan_grade;
    golestan_grade=midterm_coeff*midterm_grade+final_coeff*final_grade;
    cout<<"golestan grade  "<<golestan_grade<<endl;

}