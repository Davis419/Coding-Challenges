#include <iostream>
#include <string.h>
#include <cstdio>
#include <stdio.h>
using namespace std;

int risingNumbers[100];

bool isRising(int arr[])
{
  bool rising = true;

   for(int x = 0; x < 3; x++)
   {
     if(arr[x] <= arr[x+1]){
       continue;

     }else{
       rising = false;
     }
   }
  return rising;
}



int main()
{
   int arr[] = {1,2,3,4};
   int arrB[] = {2,2,1,6};
   int arrC[] = {1,1,1,1};
  
  if(isRising(arr))
   cout<<"It really is rising\n";
   else
    cout<<"No sorry, rising\n";

    char str[] = "Geeks for Geeks"; 
  
    // Returns first token 
    char* token = strtok(str, ""); 
  
    // Keep printing tokens while one of the 
    // delimiters present in str[]. 
    while (token != NULL) { 
        printf("%s\n", token); 
        token = strtok(NULL, " "); 
    }

    return 0;
}