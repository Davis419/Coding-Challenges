/********************************************************************************************
* Author: Davis Mojela                                                                      *
* Date: 27-Jul-2019 22h15                                                                   *
* Purpose: Given a list of numbers, find if there exists a pythagorean triplet in that list *
*          A pythagorean triplet is 3 variables a, b,c where a^2 + b^2 = c^2                *
*********************************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const int n = 6;
    //int arr[n] = {3,5,12,9,13,15};
    int arr[n] = {2,9,3,5,4,6};
    int a,b,c ;
    
   for(int x = 0; x < n ; x++){
		for(int y = 0; y < n; y++){
			if(pow(arr[x],2) + pow(arr[y],2) == pow(arr[y+1],2)){
				a = x;
				b = y;
				c = y + 1;
				break;
			}
		}
   }

    cout << "Indexes: " << a << " + " << b << " = " << c << endl;
  
        
    cout << arr[a] << "^2 + " << arr[b] << "^2 = " << arr[c] << "^2 = " << pow(arr[c],2) << endl;

    
}
