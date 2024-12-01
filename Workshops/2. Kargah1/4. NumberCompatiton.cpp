#include <iostream>
using namespace std;

int main() 
{
    int num;
    cin >> num;
    int level1=num%10;
    int level2=num/2;
    

    int half = num/2;
    int otherhalf = num-half;    
    int level3=(half+1)*(otherhalf+1);

    cout << level1+level2+level3 << endl;


}