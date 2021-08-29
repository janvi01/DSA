#include <iostream>
using namespace std;
//Segmentation fault
struct Node
{
    int data;
    Node *next;
};
void insertend(Node *head, int acdata)
{
    Node *temp = new Node;
    temp->data = acdata;
    temp->next = NULL;
    if (head == NULL)
        head = temp;
    else
    {
        Node *p = head;
        while (p->next != NULL)
            p = p->next;
        p->next = temp;
    }
}

void reverse(Node *head)
{
    Node *temp, *prev, *forw;
    temp = head;
    prev = NULL;
    while (temp != NULL)
    {
        forw = temp->next;
        temp->next = prev;
        prev = temp;
        temp = forw;
    }
    head = prev;
}
void display(Node *head)
{
    Node *p = head;
    while (p->next != NULL)
    {
        cout << p->data << "\n";
        p = p->next;
    }
}
int main()
{
    struct Node *head = NULL;
    insertend(head, 7);
    insertend(head, 2);
    insertend(head, 9);
    reverse(head);
    display(head);
    return 0;
}