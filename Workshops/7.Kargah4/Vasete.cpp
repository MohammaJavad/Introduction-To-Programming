#include <iostream>
#include <cmath>
using namespace std;

bool vasete (int arr[3])
{
    if (arr[0]*arr[2]==pow(arr[1], 2) or arr[1]*arr[2]==pow(arr[0], 2) or arr[0]*arr[1]==pow(arr[2], 2))
    {
        return true;
    }
    return false;
}

int sumArray (int arr[3])
{
    int sum=0;
    for (int i = 0; i < 3; i++)
    {
        sum+=arr[i];
    }
    return sum;

}

int main()
{
    int arr[3]={};
    int result[3]={};
    int sum=0, sum1=0;
    int n;
    cin >> n;
    cin >> arr[0] >> arr[1] >> arr[2];
    if (vasete(arr))
    {
        result[0]=arr[0], result[1]=arr[1], result[2]=arr[2];
        sum1 = sumArray(arr);
        arr[0]=arr[1];
        arr[1]=arr[2];
    } else 
    {
        arr[0]=arr[1];
        arr[1]=arr[2];
    }
    
    for (int i = 0; i < n-3; i++)
    {
        cin >> arr[2];
        sum=sumArray(arr);
        if (vasete(arr) and sum1==0)
        {
            result[0]=arr[0], result[1]=arr[1], result[2]=arr[2];
            sum1=sum;
            arr[0]=arr[1];
            arr[1]=arr[2];
        } else if (vasete(arr) and sum1>sum)
        {
            result[0]=arr[0], result[1]=arr[1], result[2]=arr[2];
            sum1=sum;
            arr[0]=arr[1];
            arr[1]=arr[2];
        }else {
            arr[0]=arr[1];
            arr[1]=arr[2];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        cout << result[i] << " ";
    }
}