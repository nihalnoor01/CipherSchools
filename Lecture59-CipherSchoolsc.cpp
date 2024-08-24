#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int input){
        this->data=input;
        this->next=NULL;
    }
};
void Printnode(Node* &node){
    cout<<"The address stored is :"<<node->next<<endl;
    cout<<"The data stored is :"<<node->data<<endl;

}
void PrintLinkedList(Node* head){
    if(head==NULL){
        cout<<"Your Linked List is empty!"<<endl;
        return;
    }
    while(head!=NULL){
        cout<<head->data<<"-->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}
void InsertAtBeginning(int input,Node* &head){
    Node* temp=new Node(input);
    temp->next=head;
    head=temp;
}
void InsertAtEnd(int input,Node* &head){
    Node* temp=new Node(input);
    Node* end=head;
    if(head==NULL){
        head=temp;
        return;
    }
    while(end->next!=NULL){
        end=end->next;

    }
    
    end->next=temp;
}
void InsertAfter(int input,int location,Node* &head){
    Node* temp=new Node(input);
    Node* loc=head;
    while(loc->data!=location){
        loc=loc->next;
        
    
    
    if(loc==NULL){
        cout<<"Element not present in the LL"<<endl;
        return;
    }}
    temp->next=loc->next;
    loc->next=temp;


}
void deleteanode(Node* & head,int data){
    if(head->data==data){
        head=head->next;
        return;

    }
    Node* temp;
    temp=head;
    Node* prev;
    while(temp->data!=data){
        if(temp->next==NULL){
            cout<<"The entered element does not exist!!"<<endl;
        }
        prev=temp;
        temp=temp->next;
    }
    if(temp->next==NULL){
        prev->next=NULL;
        return;
    }
    prev->next=prev->next->next;

}








int main(){
    Node* Node1=new Node(4);
    Node* Node2=new Node(7);
    Node* Node3=new Node(8);
    Node1->next=Node2;
    Node2->next=Node3;
    // Printnode(Node2);
    // cout<<Node2->next;
    Node* head=Node1;
    PrintLinkedList(head);
    InsertAtBeginning(33,head);
    PrintLinkedList(head);
    InsertAtEnd(273,head);
    PrintLinkedList(head);
    InsertAfter(12,7,head);
    PrintLinkedList(head);
    deleteanode(head,33);
    deleteanode(head,273);
    PrintLinkedList(head);
    deleteanode(head,12);
    PrintLinkedList(head);
    deleteanode(head,1324);
    PrintLinkedList(head);

    
}