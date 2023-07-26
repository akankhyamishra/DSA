#include<iostream>
 
using namespace std;

class node{
    public:
    int data;
    node*next;
    node*prev;

    node(int x){
        this->data=x;
        this->next=NULL;
        this->prev=NULL;
    }

    ~node(){
        int x=this->data;
        if (next!=NULL)
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
        head->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;

    }
    else{
        node*curr=head;
        node*prev=NULL;
        int count=1;
        while(count<=position){
            prev=curr;
            curr=curr->next;
            count++;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }

    
}
int main(){

 
 return 0;
}