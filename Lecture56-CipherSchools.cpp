#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int input){
        this->data=input;
        this->next=NULL;
    }

};
void printnode(node* &node){
    cout<<"Data in node: "<<node->data<<endl;
    cout<<"Address in node: "<<node->next<<endl;
}
void printLL(node * &head){
    if(head==NULL){
        cout<<"Your linked list is emputy"<<endl;
        return;
    }
    node * temp;
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"-->";
        temp=temp->next;
        
    }
    }
    int main() {
        node * head=NULL;
        node * node1=new node(5);

        node * node2=new node(7);

        node * node3=new node(8);
        node1->next=node2;
        node2->next=node3;
        head=node1;
        printnode(node1);
        printLL(head);


        
    }








// int main(){
//     node* node1=new node(4);
//     node* node2=new node(5);
//     node* node3=new node(6);
//     node1->next=node2;
//     node2->next=node3;
//     printnode(node1);
//     printnode(node2);
//     printnode(node3);
