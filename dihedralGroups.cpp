#include <iostream>
using namespace std;



int main()
{
    const int n = 3;
    int e[] = {1,2,3};
    int S3[6][3] = {{1,2,3}, {1,3,2}, {3,2,1}, {3,1,2}, {2,1,3}, {2,3,1}};

    cout<< "{" << S3[0][0] << ", "<<S3[0][1] << ", "<< S3[0][2]<< "}" << endl;
}