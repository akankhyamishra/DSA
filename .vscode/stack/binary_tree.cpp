#include<iostream>
#include<queue>
 
using namespace std;

class node{
    public:
    int data;
    node*left;
    node*right;
    
    node(int val){
        data=val;
        left=NULL;
        right=NULL;

    }

};
void levelOrderTraversal(node*root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
       node*temp=q.front();
       q.pop();
    
    if (temp==NULL)
    {
        cout<<endl;
        if (!q.empty())
        {
           q.push(NULL);
        }
        
    }
    else{
        if (temp->left)
        {
            q.push(temp->left);
        }
        else if (temp->right)
        {
            q.push(temp->right);
        }
        
        
    }
    }
    
    
    

}

//preorder
void preoder(node*root){
    if (root==NULL)
    {
       return;
    }
    
    cout<<root->data<<" "<<endl;
    preoder(root->left);
    preoder(root->right);

}

//inorder
void inorder(node*root){
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" "<<endl;
    inorder(root->right);
}

//postorder
void postorder(node*root){
    if (root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" "<<endl;

    
}
 
int main(){

node*root= new node(1);
root->left=new node(2);
root->right=new node(3);
root->left->left=new node(4);
root->left->right=new node(5);
root->right->left=new node(6);
root->right->right=new node(7);

// preoder(root);

// inorder(root);

// postorder(root);

levelOrderTraversal(root);
 

 return 0;
}