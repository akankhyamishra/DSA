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

void deletenode(node* head, int val){
if (head==NULL)
{
    cout<<"empty list";
    return;
}
else{
     node*prev=head;
     node*cur=prev->next;
     while(cur->data=val){
        prev=cur;
        cur=cur->next;
     }
     prev->next=cur->next;
     if(head==cur){
        head=prev;
     }
     cur->next=NULL;
     delete cur;
}


}
 
int main(){

 
 return 0;
}