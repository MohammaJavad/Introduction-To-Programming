#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float A,B,C;
    cin>>A>>B>>C;
    float Perimeter=0;
    if (A+B>C and A+C>B and B+C>A)
    {
        Perimeter=A+B+C;
        cout << "The Perimeter of the triangle is: " << Perimeter << endl;

        double Area=sqrt((Perimeter)*(Perimeter-A)*(Perimeter-B)*(Perimeter-C));
        cout << "The Area of the triangle is: " << Area << endl;

    } else cout << "The Triangles cant be made" << endl;
            

   
    
    
}