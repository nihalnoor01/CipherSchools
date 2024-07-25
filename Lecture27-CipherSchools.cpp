#include<iostream>
#include<string>
using namespace std;
int main(){
    string a,b;
    cout<<"Enter your first name: "<<endl;
    cin>>a;
    cout<<"Enter your second name: "<<endl;
    cin>>b;
    
    string c=a+b;
    cout<<"Name combined: "<<c<<endl;
    //length of a string
    cout<<c.length()<<endl;
    //Taking a sentance as input:
    string d;
    cin.ignore();
    cout<<"Enter the sentance now: "<<endl;
    getline(cin,d);
    cout<<"Sentance is : "<<d;




}