/*
Write a C program that read 5 numbers and counts the number of positive numbers and 
print the average of all positive values.  
Test Data : 
Input the first number: 5 
Input the second number: 8  
Input the third number: 10 
Input the fourth number: -5 
Input the fifth number: 25 
Expected Output: 
Number of positive numbers: 4 
Average value of the said positive numbers: 12.00 
*/

#include <iostream>
using namespace std;
const int LENGTH = 5;
int main()
{
    int Positive=0, Negative=0, sum = 0;
    for(int i = 0; i < LENGTH; i++){
        int num;
        cin >> num;
        if(num > 0){
            sum = sum + num;
            Positive++;
        }
        else if (num!=0)
        {
            Negative++;
        }
    }
    cout << "POSITIVE: " << Positive << endl;
    cout << "NEGATIVE: " << Negative << endl;
    cout << "AVERAGE: " << sum / (float)Positive << endl;
   
}

