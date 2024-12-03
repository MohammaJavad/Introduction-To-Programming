#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> numbers;
    string inp;
    int counter = 0;
    while (true)
    {
        cin >> inp;
        if (inp=="end")
        {
            break;
        } else {
            counter++;
            numbers.push_back(stoi(inp));
        }
    }

    if (counter==1)
    {
        cout << "Yes" << endl;
    } else 
    {
        counter/=2;

        for (int i = 0; counter!=0 ; i++)
        {
            if (*(numbers.begin()+i)==*(numbers.end()-1-i))
            {
                counter--;
                if (counter==0)
                {
                    cout << "Yes" << endl;
                    break;
                }
            } else 
            {
                cout << "No" << endl;
                break;
            }
        }
    }
    
    
}