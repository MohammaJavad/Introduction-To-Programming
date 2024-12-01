#include <iostream>
using namespace std;
const int MAX = 100;
int main(){
    int DIVISOR;
    cin >> DIVISOR;
    // i = k * divisor + 3 => i % divisor = 3
    // (i += divisor) === (i = (k + 1) * divisor + 3)
    for (int i = 3; i <= MAX; i += DIVISOR)
    {
        cout << i << ' ' << endl;
    }
    

}