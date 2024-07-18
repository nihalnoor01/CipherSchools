#include <iostream>
using namespace std;
int main(){
    int a;
    long long int c;
    cout<<"Size of an int : "<<sizeof(a)<<endl;
    cout<<"Size of a long long int : "<<sizeof(c)<<endl;
    //Address
    cout<<&a<<" is the address of 'a' and "<<&c<<" is the address of 'c'."<<endl;
    //Declaring a pointer
    int *p;
    p=&a;
    cout<<"The current address stored in pointer 'p' is: "<<p;
    return  0;

}