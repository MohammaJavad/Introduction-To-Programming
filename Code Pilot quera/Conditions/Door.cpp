#include <iostream>
using namespace std;

int main()
{
    int DoorHight, DoorLength, MasoodHight, MasoodLength;
    cin >> DoorLength >> DoorHight >> MasoodLength >> MasoodHight;
    if ((DoorHight>=MasoodHight) and (DoorLength>=MasoodLength))
    {
        cout << "yes";
    } else cout << "no";
     
}