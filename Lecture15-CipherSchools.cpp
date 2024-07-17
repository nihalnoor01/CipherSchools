#include <iostream>
using namespace std;
//Multiple return statements
int compare(int a,int b){
   
    if(a<b){
        return a;
    }else{
        return b;
    }
}
// void printstuff(){
//     cout<<"Writing my first function"<<endl;


int main(){
     int a,b;
     a=1;b=39;
     cout<<compare(a,b);

     
}