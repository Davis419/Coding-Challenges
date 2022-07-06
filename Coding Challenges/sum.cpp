/**************************************************************************************** 
* Author: Davis Mojela                                                                  *
* Date: 27-Jul-2019 13h10                                                               *
* Purpose: You're given a list of numbers, and a target K. Return whether or not there  *
*          are two numbers in the list that add up to k.                                *
*																						*
*****************************************************************************************/

#include <iostream>
using namespace std;



int main()
{
    int arr[5] = {7,4,-3,2,1};
    const int k = 5; 
    int a,b;

   for(int x = 0; x <= 5 ; x++)
    for(int y = 1; y < 5; y++){
        if(arr[x] + arr[y] == k){
            a = x;
            b = y;
            break;
        }
     }

    cout<<"Target is: "<<k<<endl;
    cout<<"Indeces are: "<<a<<" & "<<b<<endl;
    cout<<"Result is: "<<arr[a]<<" + "<<arr[b]<<" = "<<arr[a] + arr[b]<<endl;

    return 0;

}
 
