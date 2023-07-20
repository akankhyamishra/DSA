#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        left = right = NULL;
    }
};

// height
int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = height(root->left);
    int right = height(root->right);

    int ans = max(left, right) + 1;
    return ans;
}

// diameter
int diameter(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int op1 = diameter(root->left);
    int op2 = diameter(root->right);
    int op3 = height(root->left) + height(root->right) + 1;
    int ans = max(op1, max(op2, op3));
    return ans;
}

// identical
bool identical(node *root1, node *root2)
{
    if (root1 == NULL && root2 == NULL)
    {
        return true;
    }
    if (root1 == NULL && root2 != NULL)
    {
        return false;
    }
    if (root1 != NULL && root2 == NULL)
    {
        return false;
    }
    else
    {

        bool left = identical(root1->left, root2->left);
        bool right = identical(root1->right, root2->right);
        bool ans = root1->data == root2->data;

        if (left && right && ans)

            return true;
        return false;
    }
}

// sum of subtree
int sumofsubtree(node *root)
{
    int summ=0;
    if (root == NULL)
    {
        return 0;
    }
    int sum = sumofsubtree(root->left) + sumofsubtree(root->right) + root->data;
    return sum;
}

node*  prune(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {

        if (root->left)
        {
            int l = sumofsubtree(root->left);
            if (l == 0)
                root->left == NULL;
        }

        else if (root->right)
        {
            int r = sumofsubtree(root->right);
            if (r == NULL)
            {
                root->right == NULL;
            }
        }
    }
    prune(root->left);
    prune(root->right);
    return root;
    
}
int main()
{
    node *root1 = new node(3);
    root1->left = new node(4);
    root1->right = new node(2);
    root1->left->left = new node(8);
    root1->left->right = new node(5);
    root1->right->left = new node(12);
    root1->right->right = new node(23);

    node *root2 = new node(3);
    root2->left = new node(4);
    root2->right = new node(2);
    root2->left->left = new node(8);
    root2->left->right = new node(6);
    root2->right->left = new node(12);
    root2->right->right = new node(23);

    // cout<<"height of tree:"<<height(root)<<" "<<endl;
    // cout<<"diamter: "<<diameter(root)<<" ";
    cout << "is identical: " << identical(root1, root2) << " ";
    cout << "sum: " << sumofsubtree(root1);

    return 0;
}