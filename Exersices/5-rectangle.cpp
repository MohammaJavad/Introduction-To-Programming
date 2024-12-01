/*
Write a C program to compute the perimeter and area of a rectangle with a height of 7 
inches. and width of 5 inches.  
Expected Output:  
Perimeter of the rectangle = 24 inches  
Area of the rectangle = 35 square inches
*/

#include <iostream>
using namespace std;

main()
{
    cout<<"Please enter the Hight and Width of the Rectangle: "<<endl;
    int Hight,Width;
    cin>>Hight>>Width;
    int Area=Hight*Width;
    int Perimeter=2*(Hight+Width);
    cout<<"The Area of the Rectangle is: "<<Area<<" & the Perimeter of the Rectangle is: "<<Perimeter<<endl;
}
