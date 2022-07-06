#include <iostream>
using namespace std;


int main()
{
    const int n = 10;

    int arr[n][n];

    for(int x = 0; x < n; x++){
        for(int y = 0; y < n; y++){
            arr[x][y] = (x + y) % n;
        }
    }

    for(int x = 0; x < n; x++){
        for(int y = 0; y < n; y++){
            cout << arr[x][y] << " ";
        }
        cout << endl;
    }

    cout<<"\n\n";

    int identity = 0;
    cout << "Identity element => " << identity << "\n\n";

    for(int x = 0; x < n; x++)
    {
        cout << "Inverse of "<< x << " is " << n - x <<endl;
        cout << x << " + " << n - x << " = " << "0\n\n";
    }
    

    

    return 0;
}
