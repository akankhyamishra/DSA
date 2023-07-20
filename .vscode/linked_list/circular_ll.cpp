#include<iostream>
 
using namespace std;

class node{
    public:
    int data;
    node*next;

    node(int val){
    val=data;
    next=NULL;
}
};

void insertAtHead(node*head,int data){
node*n= new node(data);
if(head==NULL){
    n->next=n;
    head=n;
    return;
}
node*temp=head;
while (temp->next!=head)
{
    temp=temp->next;
}
temp->next=n;
n->next=head;
head=n;

}

void insert(node*head, int data){
    node*n=new node(data);
    if(head==NULL){
         insertAtHead(head, data);
         return ;
    }
    node*temp=head;
    while (temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    

}
void display(node*head){
node*temp=head;
do{
    cout<<temp->data<<" ->";
    temp=temp->next;
}while(temp!=NULL);
}
int main(){
node*head=NULL;
insert(head, 4);
insert(head, 2);
insert(head, 6);
insert(head, 8);
insert(head, 1);
display(head);

insertAtHead(head, 6);
display(head);

 
 return 0;
}