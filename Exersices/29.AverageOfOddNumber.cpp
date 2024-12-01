#include <iostream>
using namespace std;
const int LENGTH = 5;
int main()
{
    int Odd=0, Even=0, sum = 0;
    for(int i = 0; i < LENGTH; i++){
        int num;
        cin >> num;
        if(num%2!=0){
            sum = sum + num;
            Odd++;
        }
        else Even++;
    }
    cout << "ODD: " << Odd << endl;
    cout << "EVEN: " << Even << endl;
    cout << "AVERAGE: " << sum / (float)Odd << endl;
   
}