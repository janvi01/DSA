#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *head = NULL;

void sortedInsert(int x)
{
    Node *temp = new Node();
    temp->data = x;
    temp->next = NULL;
    Node *p = head;
    if (head == NULL)
    {
        head = temp;
    }
    if (p->next == NULL)
    {
        if (p->data >= x)
        {
            head = temp;
            temp->next = p;
        }
        else
            p->next = temp;
    }
    else
    {
        while (p != NULL && p->next->data <= x)
        {
            p = p->next;
        }
        temp->next = p->next;
        p->next = temp;
    }
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
    sortedInsert(4);
    sortedInsert(5);
    sortedInsert(3);
    sortedInsert(2);
    display(head);
    return 0;
}