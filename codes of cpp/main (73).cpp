/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/
#include<iostream>
using namespace std;
class Test
{
    int a;
    int b;

public:
    //Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : b(j), a(i+b) //will throw an error as a is initialized before b and here we are accesing b before .
    Test(int i, int j) : a(i), b(a + j)
    {
        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}
