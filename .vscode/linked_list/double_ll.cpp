#include<iostream>
 
using namespace std;
 
 class node{
    public: 
    int data;
    node*next;
    node*prev;

    node(int val){
        val=data;
        next=NULL;
        prev=NULL;
    }
 };

  void deleteAtHead(node*head){
    node*todelete=head;
    head=head->next;
    head->prev=NULL;

    delete todelete;
  }

  void deleteNode(node*head, int pos){
    if(pos==1){
        deleteAtHead(head);
        return ;
    }
    node*temp=head;
    int count = 1;
    while(temp!=NULL && count!=pos){
        temp=temp->next;
        count++;
    }
    temp->prev->next=temp->next;
    if(temp->next!=NULL){

    temp->next->prev=temp->prev;
    }

    delete temp;

}
 void insertAtHead(node*head, int val){
     node*n=new node(val);
     n->next= head;
     if(head!=NULL){
        head->prev=n;
     }
     n->prev=NULL;
     head=n;

 }

 void inserAtTail(node*head, int val){
    if(head!=NULL){
        insertAtHead(head, val);
        return ;
    }
    node*n=new node(val);
    node*temp=head;
    temp->next=n;
    n->prev=temp;



 }
 void display(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    }
int main(){

    node*head=NULL;
    inserAtTail(head, 1);
    inserAtTail(head, 2);
    inserAtTail(head, 3);
    inserAtTail(head, 4);
    display(head);

    insertAtHead(head, 5);
    display(head);

    deleteNode(head, 2);
    display(head);
   

 
 return 0;
}