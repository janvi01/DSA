#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

struct Node *insertend(Node *head, int acdata)
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
    return head;
}
void reverserecursion(struct Node *p)
{
    if (p == NULL)
        return;                //exit condition
    reverserecursion(p->next); //recursive call
    //first we will traverse every node address and then come at this point ⬇️
    cout << p->data << " ";
}
void print(struct Node *p)
{
    if (p == NULL)
        return; //exit condition
    cout << p->data << " ";
    print(p->next); //recursive call
}

int main()
{
    struct Node *head = NULL;
    head = insertend(head, 2);
    head = insertend(head, 6);
    head = insertend(head, 5);
    head = insertend(head, 4);
    print(head);
    cout << "\n";
    cout << "Reverse -->\n";
    reverserecursion(head);
    return 0;
}