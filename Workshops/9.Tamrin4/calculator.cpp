#include <iostream>
using namespace std;
int Math(int n, int m, string chr)
{
    if (chr=="+")
    {
        return n+m;
    } else if (chr=="-") 
    {
       return n-m;
    } else if (chr=="*")
    {   
        return n*m;
    } else
    {
        return n/m;
    }
    
}

int main()
{
    int numbers[50];
    string chr[50];
    int i=0;
    for (int i = 0; true; i++)
    {
        /* 
    }
    

    cout << numbers[0];
}