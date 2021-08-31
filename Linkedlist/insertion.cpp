#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *head = NULL;
void insertfront(int x)
{
    Node *temp = new Node;
    temp->data = x;
    temp->next = head;
    head = temp;
}
void insertend(int acdata)
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
void insertatgivenpos(int x, int n)
{
    Node *temp = new Node();
    temp->data = x;
    int count = 0;
    Node *p = head;
    while (count != n - 1 && p->next != NULL)
    {
        p = p->next;
        count++;
    }
    temp->next = p->next;
    p->next = temp;
}
void display(Node *head)
{
    Node *p = head;
    while (p != NULL)
    {
        cout << p->data << "\n";
        p = p->next;
    }
}
int main()
{
    insertfront(7);
    insertfront(2);
    insertfront(9);
    insertend(4);
    insertatgivenpos(3, 1);
    insertend(6);
    display(head);
    return 0;
}