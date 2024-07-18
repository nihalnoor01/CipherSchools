#include <iostream>
using namespace std;
int main(){
    int a;
    int c;
    a=23;c=47;
    cout<<"Size of int a : "<<sizeof(a)<<endl;
    cout<<"Size of : int c: "<<sizeof(c)<<endl;
    //Address
    cout<<&a<<" is the address of 'a' and "<<&c<<" is the address of 'c'."<<endl;
    //Declaring a pointer
    int *p, *q;
    p=&a;
    q=&c;
    cout<<"The current address stored in pointer 'p' is: "<<p<<endl;
    //Taking the value from a pointer:
    cout<<"The value of a from the original variable a is: "<<a<<endl;
    cout<<"The value of a obtained from the pointer variable is : "<<*p<<endl;
    cout<<"The value of b obtained from the pointer variable is : "<<*q<<endl;
    


    return  0;

}