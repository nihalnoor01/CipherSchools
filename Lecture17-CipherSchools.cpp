#include <iostream>
using namespace std;
int sum(int, int);
int main(){
    int a,b;
    a=3;b=5;
    int c;

    cout<<a<<" "<<b<<endl;
    c=76;
    cout<<c<<" This is inside the main function."<<endl;
    int d;
    d=sum(a,b);
    cout<<"a + b is : "<<d;
    
}
int sum(int a,int b){
   
    
    int d=a+b;
    a=11;
    b=234;
    int c=324232;
    cout<<c<<" This is inside the sum function."<<endl;

    return d;
}
