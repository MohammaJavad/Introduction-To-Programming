#include<iostream>
#include<cmath>
using namespace std;



int number_of_factor(int n,int factor)
{
    int counter=0;
    while(n%factor==0)
    {
       counter++;
       n/=factor;
    }
    return counter;
}


int main()
{
    // string x="44535.675";
    // int y=stoi(x);
    // double z=stod(x);
    // int t=(int) 5335.46;
    // cout<<y*2<<endl;
    // cout<<z*2<<endl;
    // cout<<x<<endl;
    
    // int n=160;
    // while(n>1)
    // {
    //     int factor=2;
    //     while(true)
    //     {
    //         if (n%factor==0)
    //         {
    //             cout<<" "<<factor;
    //             n=n/factor;
    //             break;
    //         }
    //         factor++;
    //     }
    // }


    int n=2*2*3*5*5*7*7*7;
    
    //     int counter=0;
    //     int factor=2;
    //     while(n>1)
    //     {
    //         if (n%factor==0)
    //         {
    //             n=n/factor;
    //             counter++;
    //         }
    //         else{
    //             if(counter>0)
    //             {
    //                 cout<<factor<<"^"<<counter<<"*";
    //                 counter=0;
    //             }
    //             factor++;
    //         }

    //     }
    //     cout<<factor<<"^"<<counter<<endl;
   

    // cout<<number_of_factor(720,5)<<endl;


    int factor=2;
    while(n>1)
    {
        int x=number_of_factor(n,factor);
        n/=pow(factor,x);
        if (x>0)
        {
            if(n==1)
            {
                cout<<factor<<"^"<<x;
            }
            else
            {
                cout<<factor<<"^"<<x<<"*";
            }
        }
        factor++;
    }


}