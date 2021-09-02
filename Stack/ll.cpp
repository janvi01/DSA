//Implementation of stack using linked list

//insertion and deletion takes place from same end
//i.e from front
//push==insert at front
//pop=delete from front
//head pointer=top of stack

#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = NULL; //head or top any name

void push(int x)
{
    Node *newnode = new Node;
    newnode->data = x;
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}

void pop()
{
    Node *temp = head;
    head = temp->next;
    free(temp);
}

int Top()
{
    Node *temp = head;
    return temp->data;
}

void print()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "\n";
        temp = temp->next;
    }
}

int main()
{
    int n;
    cout << "Enter size of stack :";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cout << "Enter data = ";
        cin >> x;
        push(x);
    }
    cout << "Stack --> \n";
    print();
    cout << "After popping \n";
    pop();
    print();
    cout << "Top : " << Top()<<"\n";
}