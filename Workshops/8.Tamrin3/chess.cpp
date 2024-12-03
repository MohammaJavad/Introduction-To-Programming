#include <iostream>
using namespace std;

int main()
{
    int arr[6]={1,1,2,2,2,8};
    // arr[0]=King, arr[1]=Queen, arr[2]=Castle, arr[3]=Bishop, arr[4]=Knight, arr[5]=Pawn
    for (int i = 0; i < 6; i++)
    {
        int inp=0;
        cin >> inp;
        arr[i]-=inp;
    }

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    
}