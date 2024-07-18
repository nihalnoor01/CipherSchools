//ConditionalStatements
#include<iostream>
using namespace std;
int main(){
    // float a,b;
    // cout<<"Give two floats as input: "<<endl;
    // cin>>a>>b;
    // if(a>0.1 && b>a){
    //     cout<<"Condition in if statement is true.";
    // }else{
    //     cout<<"The conditon is false"<<endl;
    // }
    int a,b,c;
    cout<<"Enter the value of a: ";
    cin>>a;

    // cout<<"Enter three floating point numbers:";
    // cin>>a>>b>>c;
    // if(a>b && b>c){
    //     cout<<"HaHaHa"<<endl;

    // }else if(a>b && b<c){
    //     cout<<"HiHiHi"<<endl;
    // }else if(a<b && b>c){
    //     cout<<"HuHuHu"<<endl;

    // }else{
    //     cout<<"Prprrrrrrr";
    // }
    switch(a){
        case 1:
        cout<<"The value of a is 1"<<endl;
        break;
        case 2:
        cout<<"THe value of a is 2"<<endl;
        break;
        default:
        cout<<"This is default and this will always be printed"<<endl;


    }
    return 0;

    
}
