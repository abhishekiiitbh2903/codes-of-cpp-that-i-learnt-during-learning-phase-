#include <iostream>
using namespace std ;

template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main (){
    int a = swapp (2,3);    // this will throw an error as we will have to pass adress of variable and there don't
                            // address of constants as address being of variables .
    cout<<a;
    return 0;
}