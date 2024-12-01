#include <iostream>
using namespace std;

int main() 
{
    int num;    
    cin >> num;
    int max=0;
    int temp=0;
    for (int i = 1; i <= num; i++)
    {
        cin >> temp;
        if (max < temp)
        {
            max = temp;
        } 
         
    }
    
    cout << max << endl;  
    
}