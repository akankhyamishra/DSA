#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;
};

void insertAtBeggining(node **head, int new_val)
{
    node *new_node = new node();
    new_node->data = new_val;
    new_node->next = *head;
    *head = new_node;
}

void insertAtMiddle(node *prev_node, int new_val)
{

    if (prev_node == NULL)
    {
        cout << "can't be inserted";
        return;
    }
    node *new_node = new node();
    new_node->data = new_val;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void append(node **head, int new_val)
{
    node *new_node = new node();
    node *last = *head;
    new_node->data = new_val;
    new_node->next = NULL;

    // linked list not empty
    if (*head == NULL)
    {
        *head = new_node;
    }
    //traverse
    while (last->next != NULL)
    {
        last = last->next;

        last->next = new_node;
        return;
    }
}

bool search(node*head, int key){
    node*temp= head;
    while (temp!=NULL)
    {
        if (temp->data==key)
        {
            return true;
        }
        temp=temp->next;
    } 
    return false;

}
void print(node *node)
{
    while (node != NULL)
    {
        cout << node->data;
        node = node->next;
    }
}

int main()
{ 
    node *head = NULL;

    insertAtBeggining(&head,12);

    insertAtBeggining(&head,5);
    insertAtBeggining(&head,78);

    append(&head, 6);
    append(&head, 12);

    insertAtMiddle(head->next, 7);

    print(head);
    cout<<endl;
    cout<<search(head, 1)<<endl;

    return 0;
}