#include <iostream>
using namespace std;

int main()
{
    string n;
    int i = 0;
    int arr[1000]={};
    int counter=0;
    while (true)
    {
        cin >> n;
        counter++;
        if (n=="end")
        {
            counter--;
            break;
        } else {
            arr[counter-1] = stoi(n);
        } 
    }
    bool flag = true;
    for (int i = 1;  ; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (counter==0)
            {
                flag=false;
                break;
            }else {
                cout << arr[counter-1] << " ";
                counter--;
            }
        }
        if (!flag)
        {
            break;
        }
        
        cout << endl;
    }
    
}