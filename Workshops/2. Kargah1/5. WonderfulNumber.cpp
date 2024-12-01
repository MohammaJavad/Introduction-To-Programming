#include <iostream>
using namespace std;

int main() 
{
    int num;
    cin >> num;

    int Sum=0; 
    int Multi=1;
    int temp = num;
    int ThreeRagham=0;
    bool Is_Three;


    while (temp>0)
    {
        int RAGHAM=0;
        RAGHAM = temp%10;
        Sum = Sum + RAGHAM;
        Multi = Multi * RAGHAM;
        if (RAGHAM%2!=0)
        {
            ThreeRagham=ThreeRagham+1;
            if (ThreeRagham>=3)
            {
                Is_Three = true;
            } else Is_Three = false;
            
        } else
        {
            ThreeRagham=0;
        }
         
        temp = temp/10;
    }
    if (Is_Three)
        {
            cout << Sum;
        } else cout << Multi;

}