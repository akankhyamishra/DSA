#include<iostream>
#include<map>
 
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

bool checkLoop(node*head){
    if (head==NULL)
    {
        return false;
    }
    node*temp=head;
    map<node*, bool> visited;
    while (temp!=NULL)
    {
        if (visited[temp]==true)
        {
            return true;
        }
        visited[temp]=true;
        temp=temp->next;
        
    }
    return false;
    
    
}
 
int main(){

 
 return 0;
}