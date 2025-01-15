/********************************************************************************************
* Author: Davis Mojela                                                                      * 
* Date: 27-Jul-2019 23h31                                                                   *
* Purpose: Given the birth year of a person, determine if they were born in a leap year		* 
*	  																						*                                               
*********************************************************************************************/

#include <iostream>
using namespace std;

void leapYear(int year)
{
    int leap = year % 4;
    if(leap == 0){
        cout<<"You were born in a leap year hooray"<<endl;
    }else{
        /* display the message */
        cout<<"Sorry, sadly you weren't born in a leap year"<<endl;
        
    }
}


int main()
{
    leapYear(2000);
    
    return 0;
}
