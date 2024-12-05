#include <iostream>
using namespace std;

int main()
{
    int NumberOfNumbers, SizeOfCategory;
    cin >> NumberOfNumbers >> SizeOfCategory;
    int Numbers[100]={};
    int counter=0;
    for (int i = 0; i < NumberOfNumbers; i++)
    {
        cin >> Numbers[i];
        counter++;
    }
    int SumOfCategory[100]={};
    int counter2=0;
    int k=0;
    long long int answer=1;
    int copyOf_SizeOfCategory=SizeOfCategory;
    for (int i = 0; i < ((NumberOfNumbers/SizeOfCategory)+1); i++)
    {
        for (int j = 0; j < SizeOfCategory and counter!=0; j++)
        {
            SumOfCategory[i]+=Numbers[k];
            counter--;
            k++;
            if (counter==0)
            {
                counter2--;
                break;
            }
            if (k>=copyOf_SizeOfCategory)
            {
                copyOf_SizeOfCategory*=2;
            }
        }
        counter2++;
    }

    for (int i = 0; i < ((NumberOfNumbers/SizeOfCategory)+1); i++)
    {
        answer*=SumOfCategory[i];
        if (NumberOfNumbers%SizeOfCategory==0)
        {
            if (counter2-1==0)
            {
                break;
            }
        } else 
        {
            if (counter2==0)
            {
                break;
            }
        }
        counter2--;
    }
    
    cout << answer << endl;
}