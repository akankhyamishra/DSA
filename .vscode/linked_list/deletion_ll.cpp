#include<iostream>
 
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int x){
     this->data = x;
     this->next = NULL;
    }

    ~node(){
        int x=this->data;
        if (this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
        
    }
};

void deletenode(int position, node*head){
if (position==1)
{
   node*temp=head;
   head=head->next;
   temp->next=NULL;
   delete temp;
}
else{
    node*curr=head;
    node*prev=NULL;
    int count;
    while(count<=position){
        prev=curr;
        curr=curr->next;
        count++;

    }
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
}

}

  


int main(){

 
 return 0;
}