#include<iostream>
using namespace std;
class New_acc{
    public:

    int days,amount;
    //Constructor
    New_acc(int a, int b){
        days=a;
        amount=b;
    }
    void getdata(){
        cout<<"Number of days :"<<days<<endl;
        cout<<"Amount Deposited :"<<amount<<endl;
    }

};
int main(){
    New_acc Hello(0,0);
    New_acc Hi(23,67000);
    Hello.getdata();
    Hi.getdata();


}