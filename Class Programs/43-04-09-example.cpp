#include<iostream>
using namespace std;



int count_digit(long long int n,int d)
{
    int counter=0;
    while(n>0)
    {
        if(n%10==d)
        {
            counter++;
        }
        n/=10;
    }
    return counter;
}

long long int construct_gtreatest_number(int k,int n_k)
{
    static long long int constructed_number=0;
    for(int i=0;i<n_k;i++)
    {
        // cout<<k;
        constructed_number*=10;
        constructed_number+=k;
    }
    return constructed_number;
}
// void print_digit(int k,int n_k)
// {
//     for(int i=0;i<n_k;i++)
//     {
//         cout<<k;
//     }
// }



int main()
{
    // int n=5;


    int i;
    long long int n=3597609345067;

    for(int d=9;d>=1;d--)
    {
        construct_gtreatest_number(d,count_digit(n,d));
    }
    cout<<construct_gtreatest_number(0,count_digit(n,0))<<endl;

    
    // cout<<count_digit(n,9)<<endl;

    // print_digit(6,4);




}