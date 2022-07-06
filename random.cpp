#include <iostream>
#include <ctime>
#include "regex.h"
using namespace std;

int random(int max)
{
    //max parameter determines the range of random numbers to be generated
    int x = time(0);

    int rand = x % max;

    return rand;
}

int main()
{

    /* for(int x = 0; x < 10; x++){
        cout<<"Random Number: "<<random(5)<<endl;
    }*/

    cout<<time(0)<<endl;
    cout<<time(0)%2<<endl;

   return 0; 
}