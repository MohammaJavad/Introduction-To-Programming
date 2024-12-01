#include <iostream>
//#include <cmath>
using namespace std;

int Factoriel (int n);
//int SumDigit (int n);
bool Swap (long long int n, int j);

int main()
{
    while (true)
    {
        long long int inp=0;
        cin >> inp;
        int answer2=0;
        if (inp==0)
        {
            cout << 1 << endl;
        }
        
        if (inp < 0)
        {
            break;
        }
        if (inp%2==0 and inp!=0)
        {
            for (int i = inp; i>0 ; i/=10)
            {
                answer2+=Factoriel(i%10);
            }
            cout << answer2 << endl;
        }
        if (inp%2!=0)
        {
            for (int i = 9; i >= 0; i--)
            {
                if (Swap(inp, i))
                {
                    cout << i;
                }      
            }
        }
    }
     
}

int Factoriel (int n)
{
    if (n==0)
    {
        return 1;
    }
    
    return n*Factoriel(n-1);
}

// int SumDigit (int n)
// {
//     int sum=0;
//     for (; n>0 ; n=n/10)
//     {
//         sum+=(n%10);
//     }
//     return sum;
// }

bool Swap(long long int n, int j)
{
    int is_here=false;
    for ( ; n>0 ; n/=10)
    {
        if (n%10==j)
        {
            is_here=true;
        }
    }
    return is_here;
}

// int Swap (int Number)
// {
    
//     int NotChanged = Number;
//     int FirstDigit=0 , SecoundDigit=0;
//     bool Is_OK = true;
//     while (true)
//     {
//         int counter = 0;
//         int i = 1;
//         Is_OK = true;
//         int NumberCopy = Number;
//         for (; Is_OK ;i++)
//         {
//             int FirstPower = 10, SecoundPower = 100;
//             FirstDigit = NumberCopy%FirstPower;
//             SecoundDigit = ((NumberCopy%SecoundPower)-FirstDigit)/10;
//             // if (FirstDigit==SecoundDigit)
//             // {
//             //     FirstDigit = 0;
//             //     counter++;
//             // }
//             if (FirstDigit>SecoundDigit)
//             {
//                 int POWER1=pow(10, i-1), POWER2=pow(10, i);
//                 Number-=FirstDigit*POWER1;
//                 Number-=SecoundDigit*POWER2;
//                 Number+=SecoundDigit*POWER1;
//                 Number+=FirstDigit*POWER2;
//             }
        
//             if (SecoundPower>NumberCopy)
//             {
//                 Is_OK=false;
//             }
//             NumberCopy/=10;
            
//         }
//         if (Number==NotChanged)
//         {
//             return Number/pow(10, counter);
//         }
//         NotChanged=Number;
//         i = 1;
//     }
// }