#include <iostream>
using namespace std;
int main(){
    int i,j;
    int a[5]={23,45,22,56,73};
    int key;
    for(j=1;j<5;j++){
        key=a[j];
        i=j-1;
        while(a[i]<key && i>=0){
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=key;


    }
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }











}