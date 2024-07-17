#include <iostream>
using namespace std;
int add(int a,int b){
   
    return a+b;
}
void printstuff(){
    cout<<"Writing my first function"<<endl;

}
int main(){
     printstuff();
     int c,d,added_val;
     cout<<"Enter the value of c: ";
     cin>>c;
     cout<<"Enter the value of d: ";
     cin>>d;
     added_val=c+d;
     cout<<added_val;
     
}