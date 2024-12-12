#include <iostream>
using namespace std;

int main()
{
    int I;
    cin >> I;
    int MatrixA[10][10];
    for (int i = 0; i < I; i++)
    {
        for (int j = 0; j < I; j++)
        {
            cin >> MatrixA[i][j];
        }
        
    }
    
    
    // cout << MatrixA[1][1] << endl;
    
    int MatrixB[10][10];
    for (int i = 0; i < I; i++)
    {
        for (int j = 0; j < I; j++)
        {
            cin >> MatrixB[i][j];
        }
        
    }

    int M, N;
    cin >> M >> N;

    for (int i = 0; i < I; i++)
    {
        for (int j = 0; j < I; j++)
        {
            MatrixA[i][j]*=M;
            MatrixB[i][j]*=N;
        }
    }

    int matrixSum[10][10];

    for (int i = 0; i < I; i++)
    {
        for (int j = 0; j < I; j++)
        {
            matrixSum[i][j]=MatrixB[i][j]+MatrixA[i][j];
        }
    }

    for (int i = 0; i < I; i++)
    {
        for (int j = 0; j < I; j++)
        {
            cout << matrixSum[i][j] << " ";
        }
        cout << endl;
    }
    

}