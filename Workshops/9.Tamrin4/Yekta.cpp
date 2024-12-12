#include <iostream>
using namespace std;

bool OneTime(int* arr, int size, int n)
{
    int flag=true;
    int counter=0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==n)
        {
            counter++;
        }
        if (counter>1)
        {
            flag=false;
        }
    }
    return flag;
}

int main()
{
    string n;
    int arr[50]={};
    int answer[50]={};
    int counter=0;
    for (int i = 0; true; i++)
    {
        cin >> n;
        if (n=="end")
        {
            break;
        } else 
        {
            arr[i]=stoi(n);
            counter++;
        }
    }
    int j = 0;
    for (int i = 0; i < counter; i++)
    {
        if (OneTime(arr, counter, arr[i]))
        {
            answer[j]=arr[i];
            j++;
        }
    }

    for (int i = 0; i < j; i++)
    {
        cout << answer[j-1-i] << " ";
    }
    
}