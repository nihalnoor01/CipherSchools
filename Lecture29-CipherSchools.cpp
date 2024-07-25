#include<iostream>
using namespace std;
class Client{
    private:
    string name;
    int PIN;
    int CVV;

    public:
    void setallatonce(string name,int PIN, int CVV){
        this->name=name;
        this->PIN=PIN;
        this->CVV=CVV;

    }void getallatonce(){
        cout<<name<<endl;
        cout<<PIN<<endl;
        cout<<CVV<<endl;
    }


};
int main(){
    Client a;
    a.setallatonce("Nihal", 9999, 111);
    a.getallatonce();


}