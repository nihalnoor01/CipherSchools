//Accessing elements in an array
#include <iostream>
using namespace std;
int main(){
    int arr[10];
    cout<<"Enter the 10 elements: "<<endl;
    for(int i=0;i<=9;i++){

        cin>>arr[i];
     
    }cout<<"The 10 elements in reverse order are:";
    for(int i=9;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    return 0;
    
}