#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int d)
    {
        data = d;
        next = NULL;
    }
};

node* mergeNode(node*head1, node*head2){
    node*p1 = head1;
    node*p2=head2;
    node*dummynode=new node(-1);
    node*p3=dummynode;

    while (p1!=NULL && p2!=NULL)
    {
        if (p1->data<p2->data)
        {
            p3->next=p1;
            p1=p1->next;
        }
        else{
            p3->next=p1;
            p1=p1->next;
        }
        p3=p3->next;
        while(p1!=NULL){
             p3->next=p1;
            p1=p1->next;
            p3=p3->next;
        }
        while(p2!=NULL){
             p3->next=p2;
            p2=p2->next;
            p2=p2->next;
        }
        return dummynode->next;
    }
    

}

node *mergeList(node *head1, node *head2)
{
    node *result;
    if (head1->data < head2->data)
    {
        
            result = head1;
            result->next = mergeList(head1->next, head2);
        }
        else
        {
            result = head2;
            result->next = mergeList(head1, head2->next);
        }
        return result;
    }

int main()
{

    return 0;
}