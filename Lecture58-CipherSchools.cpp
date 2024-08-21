#include <iostream>
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
void PrintNode(Node* &node){
    cout<<"The data stores is: "<<node->data<<endl;
    cout<<"The address stored is: "<< node->next<<endl;


}
void PrintLinkedList(Node* head){
    if(head==NULL){
        cout<<"Your LinkedList is Empty sir!";
        return;
    }
    while(head!=NULL){
        cout<<head->data<<"--->";
        head=head->next;
    }
    cout<<"NULL"<<endl;

}

void InsertAtStart(Node* &head,int data){
    
    Node* temp=new Node(data);
    if(head==NULL){
        head=temp;
    }
    temp->next=head;
    head=temp;
    
}
void InsertAtEnd(Node* &head,int data){
    

    Node* temp=new Node(data);
    Node* end;
    end=head;
    if(head==NULL){
        head=temp;
        return;
    }
    while(end->next!=NULL){
        end=end->next;
    }
    end->next=temp;
    
}

void InsertAfter(Node* &head,int location,int data){
    Node* temp=new Node(data);
    Node* var=head;
    while(var->data!=location){
        var=var->next;
        if(var==NULL){
            cout<<"The entered location does not exist, Try again!"<<endl;
            return;
        }
    }
    temp->next=var->next;
    var->next=temp;
}





int main(){
    Node* Node1=new Node(45);
    Node* Node2=new Node(50);
    Node* Node3=new Node(78);
    Node* head=Node1;
    Node1->next=Node2;
    Node2->next=Node3;
    PrintNode(Node2);
   // PrintLinkedList(head);
    InsertAtStart(head,34);
    PrintLinkedList(head);
    InsertAtStart(head,9322);
    PrintLinkedList(head);
    InsertAtEnd(head, 999);
    PrintLinkedList(head);
    InsertAfter(head,51,69);
    InsertAfter(head,50,69);
    InsertAfter(head,34,7890);
    PrintLinkedList(head);

}