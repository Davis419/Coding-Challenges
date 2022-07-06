#include <iostream>
using namespace std;


int recFunc(int num)
{
    if( num == 0 )
        return 0;
    else if( num < 0){
        cout<<num<<endl;
        return (-num);
    }
    else{
        cout<<(num - recFunc(num-5))<<endl;
        return (num - recFunc(num-5));
    }
}


int main()
{
    cout<<recFunc(17)<<endl;

    return 0;
}