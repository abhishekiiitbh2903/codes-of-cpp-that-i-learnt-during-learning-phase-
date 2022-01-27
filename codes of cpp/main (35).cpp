#include<iostream>

using namespace std ;
float moneyReceived(int currentMoney, float factor=1.04){   /* default value should be in right otherwise 
program will throw error */ 
    return currentMoney * factor;
}

int main(){
    int money;
    cout<<"print money value "<<endl;
    cin>>money;
    cout<<"If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money)<< "Rs after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money, 1.1)<< " Rs after 1 year";
    return 0;
}

 