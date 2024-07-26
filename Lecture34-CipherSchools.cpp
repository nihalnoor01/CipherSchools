#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> a;
    for(int i=34;i<41;i++){
        a.push_back(i);
    }
    for(int i=0;i<a.size();i++){
    cout<<a[i]<<" "<<endl;

    
}cout<<"Dereferencing the j pointer starts from here :";
for(auto j=a.begin();j<a.end();j++){
    cout<<*j<<" ";
}



    
}