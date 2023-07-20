#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;
};
void push(node **head, int new_val)
{
    node *new_node = new node();
    new_node->data = new_val;
    new_node->next = *head;
    *head = new_node;
}

// bool search(node *head, int x)
// {
//     node *current = head;
//     while (current != NULL)
//     {
//         if (current->data == x)
//             return true;
//         current = current->next;
//     }
//     return false;
// }
bool print(node*head, int x){
    node*current=head;
    while(current!=NULL){
        if(current->data==x){
            return true;
            current=current->next;
        }
    }
    return false;
}

int main()
{

    node *head = NULL;
    int x = 9;
    push(&head, 8);
    push(&head, 7);
    push(&head, 2);
    push(&head, 5);

  print(head,x)? cout<<"yes":cout<<"no";

    return 0;
}