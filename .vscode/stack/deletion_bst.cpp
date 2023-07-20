#include<iostream>
#include<queue>
 
using namespace std;

class node{
    public:
    int data;
    node*left;
    node*right;

    
    node(int data){
        left=NULL;
        right=NULL;
    }
};

node* minNode(node*root){
    node*temp=root;
    while (temp->left!=NULL)
    {
        temp=temp->left;
    }
    return temp;
  
}

node* maXNode(node*root){
    node*temp=root;
    while (temp->right!=NULL)
    {
        temp=temp->right;
    }
    return temp;
  
}

node* todelete(node* root, int val){
if (root==NULL)
{
    return root;
}
if (root->data==val)
{
    if (root->left==NULL && root->right==NULL)
    {   
        delete root;
        return NULL;
    }
    if(root->left!=NULL && root->right==NULL){
        node*temp=root->left;
        delete root;
        return temp;
    }
    if(root->left==NULL && root->right!=NULL){
        node*temp=root->right;
        delete root;
        return temp;
    }
    if(root->left!=NULL && root->right!=NULL){
        int mini=minNode(root->right)->data;
        root->data=mini;
        root->right=todelete(root->right, mini);
        return root;
    }
    
}
else if(root->data > val){
    root->left=todelete(root->left, val);
    return root;
}
else{
    root->right=todelete(root->right, val);
    return root;
}


}

node* levelOrderTraversal(node*root, int data){
    queue<node*> q;
    if (root==NULL)
    {
        return;
    }
    q.push(root);

    while (!q.empty())
    {
        node*temp=q.front();
        q.pop();

        if (temp==NULL)
        {
            if (!q.empty())
            {
               q.push(NULL);
            }
            else{
                if (temp->left)
                {
                    q.push(temp->left);
                }
                else{
                    q.push(temp->right);
                }
                
            }
            
        }
        
    }
    
    
}

node*insertIntoBst(node*root, int data){
    if(root==NULL){
      root=new node(data);
      return;
    }
    if (data > root->data)
    {
        root->right=insertIntoBst(root->right, data);
    }
    else{
        root->left=insertIntoBst(root->left, data);
    }
    return root;
    
}

void * input(node*root){
    int data;
    cin>>data;
    if (data==-1)
    {
        insertIntoBst(root, data);
        cin>>data;
        return;
    }
    
}
int main(){
   
    node*root=NULL;
    cout<<"enter data to create bst"<<endl;
    input(root);

    return 0;
}