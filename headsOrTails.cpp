#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#define MAX_ARR

int main()
{
    srand(time(0));
    
    char arr[30];
    int streak[60];

    char T = 'T';
    char H  = 'H';

    for(int x = 0; x < 30; x++)
    {
        int random = 1 + (rand() % 2);

        if(random == 1){
            arr[x] = T;
        }else{
            arr[x] = H;
        }
    }

    cout<<"After a 30 games, these are the total outcomes from our HEADS OR TAILS game"<<endl;

    for(int y = 0; y < 30; y++)
    {
        
        cout<<arr[y]<<" ";
    }
    cout<<endl;
    int str_num = 0;
    int pos = 0;
    int dummy_pos = 0;

    for(int y = 0; y < 30; y++)
    {
        cout<<arr[y]<<" "<<arr[y++]<<" ";

        

    }
    cout<<endl;
    for(int z = 0; z < 30; z++)
    {
     

        if(arr[z] == arr[z++]){
            
            
            streak[pos] = str_num++; //add the number of streak to the array

        }else{
            pos++; //new streak 
            str_num = 0; //number of streak resets to zero
            streak[pos] = str_num; 
        }
        
    }
    cout<<endl<<"Number of streaks are represented in the following array after 30 rounds"<<endl;

    for(int count = 0; count <= pos; count++)
    {
        cout<<streak[count]<<"  ";

    }
    cout<<endl;
    char  t = '2';

    
    puts("Sbusiso");

    puts

    return 0;
}