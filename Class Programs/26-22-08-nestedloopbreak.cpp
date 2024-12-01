#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    


    // int n=6;
    // int row=1;
    // int column;
    // while(row<=n)
    // {
    //     column=1;
    //     while(column<=n)
    //     {
    //         cout<<setw(3)<<column*row<<" ";
    //         column++;
    //         if (column>3)
    //         {
    //             break;
    //         }
    //     }
    //     cout<<endl;

    //     row++;
    // }


    // int n=6;
    // int row=1;
    // int column;
    // while(row<=n)
    // {
    //     column=1;
    //     while(column<=n)
    //     {
    //         column++;
    //         if (column>3)
    //         {
    //             continue;
    //         }
    //         cout<<setw(3)<<column*row<<" ";
    //     }
    //     cout<<endl;

    //     row++;
    // }

    int n=6;
    int row=1;
    int column;
    bool flag=true;
    while(row<=n)
    {
        column=1;
        while(column<=n)
        {
            cout<<setw(3)<<column*row<<" ";
            column++;
            if (column>3)
            {
                flag=false;
                break;
            }
        }
        if(!flag)
            break;
        cout<<endl;

        row++;
    }

}