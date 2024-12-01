/*
Write a C program to compute the perimeter and area of a circle with a radius of 6 inches.  
Expected Output:  
Perimeter of the Circle = 37.680000 inches  
Area of the Circle = 113.040001 square inches
*/

#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
    double R;
    cin>>R;
    double pi=3.14;
    double area=pi*pow(R, 2);
    double premiter= 2*pi*R;
    cout <<premiter<< endl;
    cout <<area<< endl;
    return 0;
}