#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    


// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5


    // char i=(char)97;
    // unsigned char i=97;
    // while(i<=255)
    // {
    //     if (i==254)
    //     {
    //         cout<<"error"<<endl;
    //     }
    //     cout<<(int)i<<" "<<i<<endl;
    //     i++;
    // }



    // int i=1;
    // while(i<=5)
    // {
    //     cout<<i<<"";
    //     i++;
    // }

    int n=7;
    int row=1;
    while(row<=n)
    {
       int column=1;
        while(column<=n)
        {
            cout<<column<<" ";
            column++;
        }
        cout<<endl;

        row++;
    }
    
   
    row=1;
    while(row<=n)
    {
       int column=1;
        while(column<=row)
        {
            cout<<column<<" ";
            column++;
        }
        cout<<endl;

        row++;
    }
//   #include<iomanip> 
    n=12;
    row=1;
    while(row<=n)
    {
       int column=1;
        while(column<=n)
        {
            cout<<setw(3)<<column*row<<" ";
            column++;
        }
        cout<<endl;

        row++;
    }

//DRY   Don't Repeat Yourself


}