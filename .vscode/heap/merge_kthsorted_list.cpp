#include<iostream>
#include<vector>
#include<queue>
 
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

class compare{
    public:
bool operator(node<int>*a, node<int>*b){
return a->data>b->data;
}
} ;

node<int>*mergeKthLists(vector<node<int>*> listArray){
    priority_queue<node<int>*, vector<node<int>*>, compare> minHeap;
    for (int i = 0; i < listArray.size(); i++)
    {
        if (listArray[i]!=NULL)
        {
            minHeap.push(listArray[i]);
        }
        
    }
    node<int>*head=NULL;
    node<int>*tail=NULL;
    while (minHeap.size()>0)
    {
        node<int>*temp=minHeap.top();
        minHeap.pop(); 
        if (temp->next!=NULL)
        {
            minHeap.push(temp->next);
        }
        
    if (head!=NULL)
    {
       head=temp;
       tail=temp;
    } 
       else{
        tail->next=temp;
        tail=tail->next;
       }
       
    
    }
    return head;
    
    
}
int main(){

 
 return 0;
}