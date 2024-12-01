#include <iostream>
using namespace std;

string RepeatedString(char chr, int n)
{
    string result;
    for (int i = 0; i < n; i++)
    {
        result+=chr;
    }
    return result;
}
int main()
{
    int n=10;
    char chr='|';
    //cin >> n >> chr;
    for (int i = 1; i <= n; i++)
    {
        int X=i;
        int Y=(n+1)-i;
        cout << RepeatedString(chr, X) << RepeatedString(' ', Y) << RepeatedString(chr, Y) << RepeatedString(' ', X) << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        int X=i;
        int Y=(n+1)-i;
        cout << RepeatedString(' ', Y) << RepeatedString(chr, X) << RepeatedString(' ', X) << RepeatedString(chr, Y) << endl;
    }
}