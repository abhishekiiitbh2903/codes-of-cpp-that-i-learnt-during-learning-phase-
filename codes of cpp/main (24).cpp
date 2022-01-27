#include<iostream>
using namespace std;

int main(){
      for (int i = 0; i < 40; i++)
    {
        /* code */
        if(i==2){
            continue;
        }
       // cout<<i<<endl;
    }
for (int i = 0; i < 40; i++)
    {
        /* code */
        if(i==2){
             cout<<i<<endl;  //output is 2 same as of case of using continue 
            break;
        }
       // cout<<i<<endl;  // output is 0 and 1 
    }
   
    
    return 0;
}
