#include <iostream>
using namespace std;

int main()
{
    int A[2][2] = {{2,0},{1,-2}};

    int B[2][2] = {{0,-1},{2,3}};

    // 2x2 Matrix Multiplication

    int C[2][2];

    C[0][0] = A[0][0] * B[0][0] + A[0][1] * B[1][0];

    C[0][1] = A[0][0] * B[0][1] + A[0][1] * B[1][1];

    C[1][0] = A[1][0] * B[0][0] + A[1][1] * B[1][0];

    C[1][1] = A[1][0] * B[0][1] + A[0][1] * B[1][1];






    cout<<C[0][0]<<endl;
   
}