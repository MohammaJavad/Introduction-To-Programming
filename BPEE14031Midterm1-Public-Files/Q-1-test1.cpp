#include <iostream>
using namespace std;

string repeatedString(string chr, int n)
{
    string result="";
    for (int i = 0; i < n; i++)
    {
        result+=chr;
    }
    return result;
}

int main()
{
    int n;
    string chr;
    cin >> n >> chr;
    for (int i = 0; i < n; i++)
    {
        string X = repeatedString(chr, (n-i));
        string Y = repeatedString(" ", (n+i));
        cout << Y << X << X << Y << endl;
    }
    for (int i = 0; i < n; i++)
    {
        string Z = repeatedString(" ", i);
        string X = repeatedString(chr, n);
        string Y = repeatedString(" ", (n-i));
        cout << Z << X << Y << Y << X << Z << endl;
    }
    cout << repeatedString(" ", n) << repeatedString(chr, 2*n) << repeatedString(" ", n) << endl;
    
    for (int i = 1; i < n+1; i++)
    {
        string Z = repeatedString(" ", i);
        string X = repeatedString(chr, n);
        string Y = repeatedString(" ", (n-i));
        cout << Y << X << Z << Z << X << Y << endl;
    }

    for (int i = 0; i < n; i++)
    {
        string X = repeatedString(chr, (i+1));
        string Y = repeatedString(" ", (2*n-1)-i);
        cout << Y << X << X << Y << endl;
    }
}