#include<iostream>
 
using namespace std;

class node{
    public:
    int data;
    node*left;
    node*right;

    node(int x){
        this->data=x;
        this->left=NULL;
        this->right=NULL;

    }
};

void flatten(node*root){
    node*curr=root;
    while (curr!=NULL && curr->left==NULL){
    {
        if (curr->left)
        {
        node*prev=curr->left;
        while (prev->right)
        {
            prev=prev->right;
        }
        prev->right=curr->right;
        curr->right=curr->left;
            
        }
        curr=curr->right;
    }
    
}
}
 
int main(){
    node*root= new node(1);
root->left=new node(2);
root->right=new node(3);
root->left->left=new node(4);
root->left->right=new node(5);
root->right->left=new node(6);
root->right->right=new node(7);

flatten(root);

 
 return 0;
}