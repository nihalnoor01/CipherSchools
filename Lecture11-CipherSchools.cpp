#include <iostream>
using namespace std;
int main(){
    // int i=1;
    // while(i<201){
    //     cout<<i<<" "<<endl;
    //     i++;
    // }
    //Guessing game using break statement
    int i=0;
    int input;
    while(i<201){
        cin>>input;
        if(input==165){
            cout<<"Good Job, You've guessed the number";
            break;
        }else{
            cout<<"Please try again!"<<endl;
        }
        
    }

    }

