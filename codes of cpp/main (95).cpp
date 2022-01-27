#include <iostream>
using namespace std;
 
void func(int a){
    cout<<"I am first func() "<<a<<endl;
}
 
template<class T>
void func(T a){
    cout<<"I am templatised func() "<<a<<endl;
}
int main (){
    func(4); // when exact match being there then that particular function is being called at first (prioritised)
    func(6.7); // here tempelatised is being called 
    return 0;
}