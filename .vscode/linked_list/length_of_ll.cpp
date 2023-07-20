#include<iostream>
 
using namespace std;

class node{
    public:
    int data;
    node*next;
};
 void push(node**head, int new_data){
    node*new_node=new node();
    new_node->data= new_data;
    new_node->next=*head;
    *head=new_node;
 }
 int count(node*head){
    node*current=head;
    int count=0;
   while (current!=NULL)
   {
    count++;
    current=current->next;
   }
   return count;
   
 }
int main(){
node*head= NULL;
push(&head,78);
push(&head,9);
push(&head,18);
push(&head,5);

cout<<"count is : "<<count(head)<<endl;


 
 return 0;
}

/*recursive approach:
int get(node*head){
    if(head==NULL)
        return 0;
    
    return 1+count(head->next)
}
*/