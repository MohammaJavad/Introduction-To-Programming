#include <iostream>
#include <cmath>
using namespace std;

double NumberOfDigit (unsigned long long int n)
{
    int counter=0;
    for (unsigned long long int i = n; i > 0; i/=10)
    {
        counter++;
    }
    return counter;
}

int main()
{
    unsigned long long int inp[2]={};
    for (int i = 0; i < 2; i++)
    {
        cin >> inp[i];
    }
    
    unsigned long long int N1_PartOne = inp[0]/pow(10, ((NumberOfDigit(inp[0]))/2));
    unsigned long long int N1_PartTwo = inp[0]- (N1_PartOne*pow(10, ((NumberOfDigit(inp[0]))/2)));
    int N1_Digit[8];
    int j = 0;
    for (int i = N1_PartTwo; i > 0 and j < NumberOfDigit(N1_PartTwo); i/=10, j++)
    {
        N1_Digit[j]=i%10;
    }

    for (int i = 0; i < NumberOfDigit(N1_PartTwo); i++)
    {
        cout << N1_Digit[i];
    }
    cout << N1_PartOne << endl;


    unsigned long long int N2_Part[8];
    int counter=0;
    j=0;
    for (unsigned long long int i = inp[1]; i > 0 and j < NumberOfDigit(inp[1]); i/=100, j++)
    {
        N2_Part[j]=i%100;
        counter++;
    }
    int temp1, temp2;
    for (int i = 0; i < counter; i++)
    {
        temp1=N2_Part[i]%10;
        temp2=(N2_Part[i]%100-temp1)/10;
        N2_Part[i]+=temp1*10;
        N2_Part[i]-=temp1;
        N2_Part[i]+=temp2;
        N2_Part[i]-=temp2*10;
    }
    for (int i = 0; i < counter; i++)
    {
        cout << N2_Part[counter-1-i];
    }
    cout << endl;

    unsigned long long int answer[2]={};
    for (int i = 0; i < counter; i++)
    {
        answer[1]+=N2_Part[counter-1-i]*pow(10, 2*((counter-1)-i));
    }
    
    for (int i = 0; i < NumberOfDigit(N1_PartTwo); i++)
    {
        answer[0]+=N1_Digit[i]*pow(10, NumberOfDigit(inp[0])-1-i);
    }
    answer[0]+=N1_PartOne;
    
    unsigned long long int ANS = 0;
    for (int i = 0; i < 2; i++)
    {
        ANS+=answer[i];
    }
    cout << ANS << endl;
}