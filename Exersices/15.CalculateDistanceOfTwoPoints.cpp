/*
Write a C program to calculate the distance between the two points.  
Test Data : 
Input x1: 25  
Input y1: 15  
Input x2: 35  
Input y2: 10  
Expected Output: 
Distance between the said points: 11.1803  
*/

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() 
{
    float x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    float DifferenceOfXs, DifferenceOfYs;
    DifferenceOfXs = x1-x2;
    DifferenceOfYs = y1-y2;
    cout << setprecision(3) << sqrt(pow(DifferenceOfXs, 2)+pow(DifferenceOfYs, 2)) << endl;
}