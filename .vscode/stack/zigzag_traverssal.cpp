#include<iostream>
#include<vector>
#include<queue>
 
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
} ;

vector<int> zigzag(node*root){
vector<int> res;
bool lefttoright = true;

if (root==NULL) 
{
    return res;
}
queue<node*> q;
q.push(root);
while (!q.empty())
{
    vector<int> ans(q.size());

    for (int i = 0; i < q.size(); i++)
    {
        node*frontnode=q.front();
        q.pop();

        int index=lefttoright? i:q.size()-i-1;
        ans[index]=frontnode->data;

        if (frontnode->left)
        {
            q.push(frontnode->left);
        }
        if (frontnode->right)
        {
            q.push(frontnode->right);
        }
        
        
    }
    lefttoright=false;
    for (auto &&i : ans)
    {
        res.push_back(i);
    }
    
    return res;      
}

}

int main(){
 node *root2 = new node(3);
    root2->left = new node(4);
    root2->right = new node(2);
    root2->left->left = new node(8);
    root2->left->right = new node(6);
    root2->right->left = new node(12);
    root2->right->right = new node(23);

    zigzag(root2);
 
 return 0;
}