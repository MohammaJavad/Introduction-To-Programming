#include <iostream>
using namespace std;

int main()
{
    int age;
    cin >> age;
    int in_Month = age * 12;
    long long int in_second = in_Month * 30 * 86400;
    cout << in_Month << endl;
    cout << in_second << endl;
}