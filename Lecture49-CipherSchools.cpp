#include<iostream>
using namespace std;
int fib(int input){

    //Base Case=
    if(input==1 || input ==0){
        return 1;
    }

    int Final_Answer=fib(input-1)+fib(input-2);
    return Final_Answer;



}
int main(){
    int input;
    cout<<"Enter the number: ";
    cin>>input;
    cout<<fib(input);
}