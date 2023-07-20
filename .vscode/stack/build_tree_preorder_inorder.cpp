#include<iostream>
 
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

int search(int inorder[], int start, int end, int curr){
    for (int i = 0; i <= end; i++)
    {
        if(inorder[i]==curr)
        return i;
    }
    return -1;
    
}

node*buildtree(int preorder[], int inorder[], int start, int end){
int idx=0;
if (start>end)
{
    return NULL;
}

int curr=preorder[idx++];

node*root= new node(curr);
if(start==end)
  return root;

int ans=search(inorder, start, end, curr);
root->left=buildtree(preorder, inorder, start, ans-1),
root->right=buildtree(preorder, inorder, ans+1, end);
}

void inorder(node*root){
    if (root==NULL)
    {
        return;
    }
    
    inorder(root->left);
    cout<<root->data<<endl;
    inorder(root->right);
}
 
int main(){

    int preorder[]={1,2,3,4,5};
    int inorder[]={4,2,1,5,3};

    buildtree(preorder, inorder, 0, 5 );
 
 return 0;
}