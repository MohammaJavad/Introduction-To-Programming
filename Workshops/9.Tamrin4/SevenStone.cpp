#include <iostream>
using namespace std;

int indexOfArray (int* arr, int n)
{
    int index;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i]==n)
        {
            index=i;
        } 
    }
    return index;
}

int main()
{
    int arr[7]={};
    int n;
    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }

    cin >> n;
    int ans;
    if (indexOfArray(arr, n)==0)
    {
        ans=6;
    } else 
    {
        ans=7-indexOfArray(arr, n);
    }

    cout << ans << endl;
}