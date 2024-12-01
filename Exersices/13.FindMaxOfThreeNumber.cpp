/*
Write a C program that accepts three integers and find the maximum of three.  
Test Data : 
Input the first integer: 25  
Input the second integer: 35  
Input the third integer: 15  
Expected Output: 
Maximum value of three integers: 35
*/
#include <iostream>
using namespace std;
int main()
{
  int one, two, three;
  int MAX;
  cin>>one>>two>>three;
  if (one>two){
    MAX=one;
  } else {
    MAX=two;
  }
  if (MAX<three){
    MAX=three;
  }
  
  std::cout << "The Maximum is: " << MAX << std::endl;
  
}