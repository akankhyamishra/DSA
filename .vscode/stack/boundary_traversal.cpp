#include<iostream>
#include<vector>
 
using namespace std;

class node{
    public:
    int data;
    node*left;
    node*right;

    node(int x){
        this->data = x;
        this->left=NULL;
        this->right=NULL;


    }
};

void traverseLeft(node*root, vector<int> ans){
    if ((root==NULL)||(root->left==NULL && root->right==NULL))
    {
        return;
    }
    ans.push_back(root->data);
    (root->left)?traverseLeft(root->left, ans):traverseLeft(root->right, ans);

    
}

void traverseRight(node*root, vector<int>ans){
    if ((root==NULL)||(root->left==NULL && root->right==NULL))
    {
        return;
    }
    (root->right)?traverseRight(root->right, ans):traverseRight(root->left, ans);
     
     ans.push_back(root->data);

    
}

void traverseLeaf(node*root, vector<int> ans){
     if ((root==NULL)||(root->left==NULL && root->right==NULL))
        return ;
       ans.push_back(root->data) ;
     

     traverseLeaf(root->left,ans);
     cout<<root->data<<endl;
     traverseLeaf(root->right,ans);
     
}

void boundary(node*root, vector<int> ans){
if (root==NULL)
{
    return;
}
ans.push_back(root->data);

traverseLeft(root->left, ans);

traverseLeaf(root->left, ans);
traverseLeaf(root->right, ans);

traverseRight(root->right, ans);

}
 
int main(){
    node *root2 = new node(3);
    root2->left = new node(4);
    root2->right = new node(2);
    root2->left->left = new node(8);
    root2->left->right = new node(6);
    root2->right->left = new node(12);
    root2->right->right = new node(23);

 
 return 0;
}