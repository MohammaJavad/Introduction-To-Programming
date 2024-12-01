#include <iostream>
using namespace std;
string RepeatedString(unsigned j, string n)
{
    string result = "";
    for (int i = 0; i < j; i++)
    {
        result+=n;
    }
    return result;
}
int main()
{
    int n;
    cin >> n;
    int temp = 1;
    for (int i = 1; i > 0; i+=temp)
    {
        int x, y;
        x = ((n/2)+1)-i;
        y = ((2*i)-1);
        string X = RepeatedString(x, " "), Y = RepeatedString(y, "*");
        // cout << X + Y + X + X + Y << endl;
        for(int k = 3; k > 0; k--)
        {
            cout << X + Y + X;
        }
        cout << endl;
        if (i==(n/2)+1)
        {
            temp = -1;
        }
        
        
    }
    
}