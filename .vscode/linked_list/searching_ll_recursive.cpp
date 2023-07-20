#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;
};
void push(node **head, int new_data)
{
    node *new_node = new node();
    new_node->data = new_data;
    new_node->next = *head;
    *head = new_node;
}
bool search(node *head, int x)
{
    if (head == NULL)
        return false;

    if (head->data==x)
       return true;

       return search(head->next,x);
}
int main()
{
    node*head=NULL;
    int x=12;

    push(&head,67);
    push(&head,34);
    push(&head,21);
    push(&head,4);
    push(&head,10);

    search(head, x)?cout<<"yes":cout<<"no";
    return 0;


    return 0;
}