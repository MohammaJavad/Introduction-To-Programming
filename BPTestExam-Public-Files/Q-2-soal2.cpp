#include <iostream>
using namespace std;

int main()
{
    int n=7;
    std::cin >> n;
    int counter = 1;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 0; j < i ; j++, counter++)
        {
            std::cout << counter << " ";
        }
        
        cout << endl;
    }
    
}