#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    int numberOfRotations;
    char rotationDirection;
    cin >> rotationDirection >> numberOfRotations;
    cin.get();
    string line;
    getline(cin, line);
    stringstream ss = stringstream(line);
    int numbers;
    int arr[10];
    int i = 0;
    for (; ss>>numbers; i++)
    {
        arr[i]=numbers;
    }

    if (rotationDirection=='R')
    {
        for (int j = 0; j < numberOfRotations; j++)
        {
            int temp1, temp2=arr[i-1];
            for (int k = 0; k < i; k++)
            {
                if (k%2==0)
                {
                    temp1 = arr[k];
                    arr[k]=temp2;
                } else 
                {
                    temp2=arr[k];
                    arr[k]=temp1;
                }
            }
        }
    } else 
    {
        for (int j = 0; j < numberOfRotations; j++)
        {
            
            if (i%2!=0)
            {
                int temp1, temp2=arr[0];
                for (int k = i-1; k >= 0; k--)
                {
                    if (k%2==0)
                    {
                        temp1 = arr[k];
                        arr[k]=temp2;
                    } else 
                    {
                        temp2=arr[k];
                        arr[k]=temp1;
                    }
                }
            } else 
            {
                int temp1=arr[0], temp2;
                for (int k = i-1; k >= 0; k--)
                {
                    if (k%2!=0)
                    {
                        temp2 = arr[k];
                        arr[k]=temp1;
                    } else 
                    {
                        temp1=arr[k];
                        arr[k]=temp2;
                    }
                }
            }    
        } 
    }
    
    for (int j = 0; j < i; j++)
    {
        cout << arr[j] << " ";
    }
    
    

}