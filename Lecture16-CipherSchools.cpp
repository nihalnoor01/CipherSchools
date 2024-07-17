#include <iostream>
using namespace std;
int sum(int, int);//Function Protocol
int main(){
    int a,b;
    a=3;b=5;
    int c;
    cout<<a<<" "<<b<<endl;//Values before calling the sum function
    c=sum(a,b);
    cout<<c<<endl;
    cout<<a<<" "<<b<<endl;//Values after calling sum function
    return 0;
}
int sum(int a,int b){
    int c;
    
    c=a+b;
    a=11;
    b=234;
    return c;
}
