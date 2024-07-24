#include<iostream>

using namespace std;
//Swap by using call by reference
void swap(int *a,int *b){
    int k;
    k=*a;
    *a = *b;
    *b=k;


}
float average (int size, float arr[]){
    float sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
        
    }
    return sum/size;


}



int main(){
    int a;int b;
    a=450;
    b=566;
    cout<<"The value of a and b before swapping: "<<a<<" "<<b<<endl;
    swap(&a,&b);
    cout<<"The value of a and b after swapping: "<<a<<" "<<b<<endl;
    float num[]={12,34,56,7,8};
    int d=5;
    cout<<average(d,num);
    



}