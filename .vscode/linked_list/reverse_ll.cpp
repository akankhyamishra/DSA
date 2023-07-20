#include<iostream>
 
using namespace std;

class node{
    public:
    int data;
    node*next;
};

void insert(node**head, int key){
    node*new_node=new node();
    new_node->data=key;
    new_node->next=*head;
    *head=new_node;
}

node*reverse(node*head){
    node*prev=NULL;
    node*curr=head;
    node*nextptr;
    while(curr!=NULL){
        nextptr->next=curr->next;
        curr->next=prev;

        prev=curr;
        curr=nextptr;

    }
    return prev;
}

node *reversek(node*head, int k){
    node*prev=NULL;
    node*curr=head;
    node*next;
    
    int count=0;
    while(curr!=NULL && count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;

        count++;

    }
    if (next!=NULL){
       
    head->next=reversek(next,k);
    }
    
    return prev;
    

}

void print(node*head){
    node*temp=head;
    while(temp!=NULL){
        
           cout<<temp->data<<"->"<<" ";
           temp=temp->next;
        
    }   
    cout<<"NULL"<<endl;

}

int main(){

 node*head=NULL;
 insert(&head, 1);
 insert(&head, 2);
 insert(&head, 3);
 insert(&head, 4);
 insert(&head, 5);
 insert(&head, 7);


 print(head);
 int k=3;
 node*newhead=reversek(head,k);

 print(newhead);

 return 0;
}