#include<iostream>
using namespace std;
template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main(){
     int x=3, y=4;  // ***************************************************imPORTANT CODE ********************************************************
     
     
   swapp (x,y);
//   int x, y;
   cout<<x<<y;
    return 0;
}
