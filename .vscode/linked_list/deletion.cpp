#include<iostream>
 
using namespace std;

class node{
    public:
    int data;
    node* next;
};

void deletion(node*head, int new_key)
{
    node*new_node=head;
    new_node->data=new_key;
    new_node->next=head;
    head=new_node;
}
void print(node*head, int key){
    node*temp=head;
    while(temp!=NULL){
        temp=temp->next;
    }
}  
    


int main(){

 
 return 0;
}