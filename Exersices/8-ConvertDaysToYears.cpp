/*
Write a C program to convert specified days into years, weeks and days.  
Note: Ignore leap year.  
 
Test Data : 
Number of days : 1329  
Expected Output : 
Years: 3  
Weeks: 33  
Days: 3
*/

#include <iostream>
using namespace std;

int main()
{
    cout<<"Please enter the Date Number: \n";
    int YearDateNumber=365;
    // calculating the year number
    int DateNumber;
    cin>>DateNumber;
    int Year=(int)DateNumber/(int)YearDateNumber;
    cout<<Year<<endl;
    // calculating weeks number
    int RemainingDays=(DateNumber-(YearDateNumber*Year));
    int Week=RemainingDays/7;
    cout<<Week<<endl;
    // calculating date number
    int Days=RemainingDays-(Week*7);
    cout<<Days<<endl;
}
