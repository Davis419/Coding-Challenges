#include <iostream>
using namespace std;

int seq(int begin, int end, int step)
{
    
    bool isDone = true;

    int sum = 0;
    int current = begin;

    while(isDone){
        sum += current;

        current += step;

        if(current > end)
            isDone = false;
        
    }

    return sum;

}

int main()
{

    int c = seq(1,5,3);

    cout<<c<<endl;

return 0;

}

