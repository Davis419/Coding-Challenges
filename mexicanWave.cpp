#include <iostream>
#include <cctype>
#include <string>
using namespace std;


void mexicanWave(string str)
{
    const int len = str.length();

    string arrOfStrings[len];

    for(int x = 0; x < len; x++)
    {
        if(str[x] != ' '){
            str[x] = toupper(str[x]); //Hello, 
            arrOfStrings[x] = str;
            str[x] = tolower(str[x]);
        }else
          continue;
    }
    cout<<arrOfStrings[len]<<endl;

    // for(int x = 0; x < len; x++)
    // {
    //     cout<<arrOfStrings[x]<<endl;
    // }

}

int main()
{
    string str = " batman";
    mexicanWave(str);

    return 0;
}
