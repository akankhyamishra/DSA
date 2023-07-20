#include<iostream>
 
using namespace std;

class node{
public:
int data;
node*next;

node(int x){
data=x;
next=NULL;
}
};

class queue{
    node* front;
    node*back;
    
    public:
    queue(){
        front=NULL;
        back=NULL;

    }
    void push(int x){
    node*new_node = new node(x);
    back->next=new_node ;
    back=new_node;

    if (front==NULL)
    {
        front=new_node;
        back=new_node;
        return;

    }
    back->next=new_node;
    back=new_node;
    
}

void pop(){
    if (front==NULL)
    {
        cout<<" queue empty "<<endl;
        
    }
    node*todelete=front;
    front=front->next;

    delete todelete;
    
}

int peek(int x){
    if (front==NULL)
    {
        cout<<" queue empty "<<endl;
    }
    return front->data;
    
}

bool empty(){
    if (front==NULL)
    {
        return true;
    }
    return false;
}
};

int main(){

 
 return 0;
}