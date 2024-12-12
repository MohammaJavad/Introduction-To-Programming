#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

bool is_here (vector <string> array, string name)
{
    for (int i = 0; i < array.size(); i++)
    {
        if (array[i]==name)
        {
            return true;
        }
    }
    return false;
}

int index(vector <string> array, string name)
{
    for (int i = 0; i < array.size(); i++)
    {
        if (array[i]==name)
        {
            return i;
        }   
    }
    return -1;
}


int main()
{   
    vector <int> sum;
    vector <string> name;
    while (true)
    {
        string line;
        getline(cin, line);
        auto ss = stringstream(line);
        string temp;
        int Tempsum=0;
        ss>>temp;
        int t;
        if (temp=="-----")
        {
            break;
        } else if (is_here(name, temp))
        {
            for (int j = 0; ss>>t; j++)
            {
                Tempsum+=t;
            }
            sum[index(name, temp)]+=Tempsum;
        } else 
        {
            name.push_back(temp);
            while(ss>>t)
            {
                Tempsum+=t;
            }
            sum.push_back(Tempsum);
        }
    }

    
    for (int i = 0; i < sum.size(); i++)
    {
        for (int j = 0; j < sum.size()-1; j++)
        {
            if (sum[j]>sum[j+1])
            {
                swap(sum[j], sum[j+1]);
                swap(name[j], name[j+1]);
            }
        }
    }
    
    
    
    for (int i = name.size()-1; i >= 0; i--)
    {
        cout << name[i] << " ";
    }
    
    

    
}