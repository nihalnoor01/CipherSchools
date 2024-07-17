#include <iostream>
using namespace std;
int swap(int &a,int &b){
   
    int k;
    k=a;
    a=b;
    b=k; 
}
int main(){
    

   
   int a,b;
    a=10;b=20;
    cout<<"Before Swapping: "<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"After Swapping: "<<a<<" "<<b;


    
}

