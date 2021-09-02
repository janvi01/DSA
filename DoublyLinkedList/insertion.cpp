#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
};
Node *head = NULL;
void Insertathead(int x)
{
    Node *newnode = new Node;
    newnode->data = x;
    newnode->next = NULL;
    newnode->prev = NULL;
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    head->prev = newnode;
    newnode->next = head;
    head = newnode;
}
void Insertatend(int x){
    Node *newnode = new Node;
    newnode->data = x;
    newnode->next = NULL;
    newnode->prev = NULL;
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    Node* p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    newnode->prev=p;
    p->next=newnode;
}
void display()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "\n";
        temp = temp->next;
    }
}
void displayreverse()
{
    Node *temp = head;
    cout<<"DLL --> \n";
    while (temp->next != NULL)
    {
        cout << temp->data << "\n";
        temp = temp->next;
    }
    cout << temp->data << "\n";
    cout<<"Reverse DLL -->\n ";
    while (temp != NULL)
    {
        cout << temp->data << "\n";
        temp = temp->prev;
    }
}
int main()
{
    int n;
    cout << "How many numbers to be inserted = ? -->";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cout << "Enter data -- > ";
        cin >> x;
        Insertathead(x);
    }
    Insertatend(0);
    display();
    displayreverse();

    return 0;
}