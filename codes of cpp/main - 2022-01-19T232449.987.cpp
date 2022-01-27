#include<iostream>
#include<list>
 
using namespace std;
 
void display(list<int> &lst){
    list<int> :: iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    
}
 
int main(){
    
    list<int> list1;  //empty list of 0 length
 
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
 
    display(list1);
 cout<<endl;
    

    list1.pop_back();
    display(list1);
    cout<<endl;
    list1.pop_front();
    display(list1);
    return 0;
}

// output 
// 5 7 1 9 12 
// 5 7 1 9
// 7 1 9