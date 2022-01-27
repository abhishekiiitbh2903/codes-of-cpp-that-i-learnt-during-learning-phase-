#include<iostream>
using namespace std;
class A{
    int a;
    public:
        void setData(int a){
            this->a = a;  // this pointer refers the adress to that object which has called the data member of class
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};
int main(){
    A b;
    b.setData(4);
    b.getData();
    return 0;
}
