#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *head = NULL;

void insertfront(int x) //copied
{
    Node *temp = new Node;
    temp->data = x;
    temp->next = head;
    head = temp;
}

void deletenode(int n)
{
    Node* temp=head;
    if (n == 1)
    {
        head=temp->next;
        free(temp);
    }
    else
    {
        for(int i=1;i<n-1;i++){
            temp=temp->next;
        }
        Node *temp2=temp->next;
        temp->next=temp2->next;
        free(temp2);
    }
}
void display()
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
    insertfront(2);
    insertfront(9);
    insertfront(8);
    cout<<"Before --> \n ";
    display();
    //first we will then only we can delete :p
    int n;
    cout << "Enter any valid position for node to be deleted = ";
    cin >> n;
    cout<<"After deletion --> \n";
    deletenode(n);
    display();
    return 0;
}