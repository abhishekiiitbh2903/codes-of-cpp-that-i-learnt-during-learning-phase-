#include<iostream>
using namespace std;

int main(){
    // for (int i = 0; i < 40; i++)
    // {
    //     /* code */
    //     if(i==2){
    //         break;
    //     }
    //     cout<<i<<endl;
    // }
    for (int i = 0; i < 40; i++)
    {
        /* code */
        if(i==2){
            cout<<i<<endl; // output will be 2
            continue;
        }
       // cout<<i<<endl; // output 0-39 excluding 2
    }

    
    return 0;
}
