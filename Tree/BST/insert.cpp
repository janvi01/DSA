#include <iostream>
using namespace std;

//BST IMPLEMENTATION
struct Node
{
    int data;
    Node *left;
    Node *right;
};
Node *root = NULL;

void insert(int x)
{
    Node *temp = root; //Searching pointer
    Node *tail;        //tailing pointer
    Node *p = new Node();
    p->data = x;
    p->left = NULL;
    p->right = NULL;
    if (root == NULL)
    {
        root = p;
        return;
    }
    while (temp != NULL)
    {
        tail = temp;
        if (x < temp->data)
            temp = temp->left;
        else if (x > temp->data)
            temp = temp->right;
        else
            return;
    }
    // Now temp points at NULL and tail points at insert location
    if (x < tail->data)
    {
        tail->left = p;
    }
    else
    {
        tail->right = p;
    }
}

bool search(Node *p, int key){
    if(key==p->data)
    return true;
    else if(key>p->data)
    search(p->right, key);
    else
    search(p->left, key);
    return false;
}
void inordertraverse(Node *p)
{
    if (p)
    {
        inordertraverse(p->left);
        cout << p->data << " ";
        inordertraverse(p->right);
    }
}

int main()
{
    insert(10);
    insert(8);
    insert(9);
    insert(3);
    insert(11);
    insert(12);
    inordertraverse(root);
    if(search(root, 11))
    cout<<"Found\n";
    else
    cout<<"Not Found\n";
    return 0;
}