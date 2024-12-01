#include <iostream>
using namespace std;

int main()
{
    int N1,N2,N3,N4,N5;
    int Positive=0, Negative=0;
    cin>>N1>>N2>>N3>>N4>>N5;
    
    if (N1>0 and N1!=0)
    {
        Positive=Positive+1;
    } else if (N1!=0)
    {
        Negative = Negative+1;
    }
    
    if (N2>0 and N2!=0)
    {
        Positive=Positive+1;
    } else if (N2!=0)
    {
        Negative = Negative+1;
    }

    if (N3>0 and N3!=0)
    {
        Positive=Positive+1;
    } else if (N3!=0)
    {
        Negative = Negative+1;
    }

    if (N4>0 and N4!=0)
    {
        Positive=Positive+1;
    } else if (N4!=0)
    {
        Negative = Negative+1;
    }

    if (N5>0 and N5!=0)
    {
        Positive=Positive+1;
    } else if (N5!=0)
    {
        Negative = Negative+1;
    }

    cout << "Positive = " << Positive << endl;
    cout << "Negative = " << Negative << endl;

}