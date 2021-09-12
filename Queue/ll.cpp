//Implementation of Queue using Linked list
#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
struct Node *front = NULL; //dequeue occurs
struct Node *rear = NULL;  //enqueue occurs

void enqueue(int x)
{
    Node *temp = new Node;
    temp->data = x;
    temp->next = NULL;

    if (front == NULL && rear == NULL) //when empty
    {
        front = rear = temp;
        return;
    }
    //else
    rear->next = temp;
    rear = temp;
}
void dequeue()
{
    struct Node *temp = front;
    if (front == NULL && rear == NULL) //when empty
        return;
    if (front == rear)
    {
        front = rear = NULL;
    }
    else
        front = front->next;
    free(temp);
}
void printlist()
{
    struct Node *p = front;
    while (p != NULL)
    {
        cout << p->data << "\n";
        p = p->next;
    }
}

int main()
{
    enqueue(4);
    enqueue(5);
    enqueue(6);
    enqueue(8);
    enqueue(3);
    printlist();
    dequeue();
    dequeue();
    cout << "After-->\n";
    printlist();
    cout << "Front-->\n";
    cout << front->data << "\n";
    cout << "Rear-->\n";
    cout << rear->data << "\n";
}