#include <iostream>
using namespace std;
void maxclass(int start[],int end[], int class_id[]){

    cout<<"Your classes sorted by maximum number of classes you can attempt: ";
    cout<<class_id[0]<<" ";
    int current_end=end[0];
    for(int i=1;i<9;i++){
        if(start[i]>=current_end){
            cout<<class_id[i]<<" ";
            current_end=end[i];
        }
    }
}
int main(){
    int start[]={2,2,4,1,5,8,9,11,13};
    int end[]={3,5,7,8,9,10,11,14,16};
    int class_id[]={4,2,3,1,5,6,7,8,9,11,13};
    maxclass(start,end,class_id);
}