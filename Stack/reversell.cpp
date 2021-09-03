#include <iostream>
#include <stack>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *head = NULL;
void insertfront(int x)
{
    //creating ll
    Node *temp = new Node;
    temp->data = x;
    temp->next = head;
    head = temp;
}
struct Node *revll()
{
    stack<struct Node *> rev; //using inbuilt stack of cpp
    Node *temp = head;
    while (temp != NULL)
    {
        rev.push(temp);
        temp = temp->next;
    }
    temp = rev.top();
    head = temp;
    rev.pop();
    while (!rev.empty())
    {
        temp->next = rev.top();
        rev.pop();
        temp = temp->next;
    }
    temp->next = NULL;
    return head;
}
void print(struct Node *head)
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
    cout << "Create Linked list -->\n";
    //assume size of ll 5
    for (int i = 0; i < 5; i++)
    {
        int x;
        cout << "Enter data : ";
        cin >> x;
        insertfront(x);
    }
    cout << "Linked list -->\n";
    print(head);
    head = revll();
    cout << "Reverse Linked list -->\n";
    print(head);
}