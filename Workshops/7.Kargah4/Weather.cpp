#include <iostream>
using namespace std;

int average(int arr[4])
{
    int sum=0, average=0;
    for (int i = 0; i < 4; i++)
    {
        sum+=arr[i];
    }
    return sum/4;
}
int main()
{
    int result[7]={};
    int arr[4]={};
    int endsum=0;
    for (int i = 0; i < 7; i++)
    {
        for (int i = 0; i < 4; i++)
        {
            cin>>arr[i];
            endsum+=arr[i];
        }
        result[i]=average(arr);
    }
    int endresult=0;
    
    endresult=endsum/28;
    for (int i = 0; i < 7; i++)
    {
        cout << result[i] << endl;
    }
    cout << endresult << endl;
}