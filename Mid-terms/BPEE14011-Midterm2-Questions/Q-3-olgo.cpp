#include <iostream>
using namespace std;

string repeatedString (char chr, int counter)
{
    string result = "";
    for (int i = 0; i < counter; i++)
    {
        result+=chr;
    }
    return result;
}
int main()
{
    int number;
    char chr1, chr2;
    cin >> chr1 >> chr2 >> number;
    string X = repeatedString(chr1, number), Y = repeatedString(chr2, number); 
    for (int i = 0; i < number; i++)
    {
        cout << X + Y + X << endl;
    }
    

    for (int i = 0; i < number; i++)
    {
        cout << Y + X + Y << endl;
    }


    for (int i = 0; i < number; i++)
    {
        cout << X + Y + X << endl;
    }
}