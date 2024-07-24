#include<iostream>
using namespace std; 
int main(){
    int a;
    int *b;
    b=&a;
    //b is a pointer to a.
    cout<<"The address of a which is stored in b is "<<b<<" and the value of b+1 is "<<b+1<<endl;
    //Array
    int c[5];
    for(int k=0;k<6;k++){
        cout<<&c[k]<<endl;

    }//We can see that the elements are stored consecutively.
}