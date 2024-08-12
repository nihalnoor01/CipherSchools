#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data_input){
        this->data=data_input;
        this->next=NULL;

    }

};
void printnode(node* &node){
    cout<<"Data is : "<<node->data<<endl;
    cout<<"Address is : "<<node->next<<endl;
}
int main(){
    node* node1=new node(3);
    node* node2=new node(4);
    node* node3=new node(8);

    node1->next=node2;
    node2->next=node3;
    printnode(node1);
    
    cout<<"Node 2: "<<node2<<endl;
    
    printnode(node2);
    printnode(node3);

}