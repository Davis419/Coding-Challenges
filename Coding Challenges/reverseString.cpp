/********************************************************************************************
* Author: Davis Mojela                                                                      * 
* Date: 17-Feb-2020 21h52                                                                   *
* Challenge Given a string, reverse the characters of the string and print the new version 	* 
*                                                  											*
*********************************************************************************************/

#include <cstring>
#include <iostream>
#include <string>
using namespace std;

string reverseString(string str)
{
    const int len = str.length();
    int n = len - 1;
    string rev = "";

    for(int i = 0; i < len; i++)
    {
        rev += str[n];
        n--;
    }

    return rev;
}

int main()
{

    cout<<reverseString("Davis")<<endl;
    return 0;
}
