#include <iostream>
using namespace std;

int main()
{
   int n;
   cin >> n;
   int W[n];
   for (int i = 0; i < n; i++)
    cin >> W[i];
   
   int Max = 0;
   for (int i = 0; i < n; i++)
    if (W[i]>Max)
        Max = W[i];
   
    int Size = sizeof(W) / sizeof(W[0]);
    int idx;
    for (idx = 0; idx < Size; idx++) {
        if (W[idx] == Max) {
            break;
        }
    }
    cout << (idx+1) << endl;
}