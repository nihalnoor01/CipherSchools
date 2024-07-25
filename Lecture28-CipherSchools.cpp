#include<iostream>
using namespace std;
class Client{
    private:
    string name;
    int PIN;
    int CVV;

    public:
    void setallatonce(string a,int b, int c){
        name=a;
        PIN=b;
        CVV=c;

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