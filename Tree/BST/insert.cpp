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

Node* getRoot(){
    return root;
}
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
void inordertraverse(Node *p)
{
    if (p)
    {
        inordertraverse(p->left);
        cout << p->data << " ";
        inordertraverse(p->right);
    }
}
Node* iterativeSearch(int key) {
    Node* t = root;
    while (t != nullptr){
        if (key == t->data){
            return t;
        } else if (key < t->data){
            t = t->left;
        } else {
            t = t->right;
        }
    }
    return nullptr;
}
Node* recursiveSearch(Node *p, int key){
    if (p == nullptr){
        return nullptr;
    }
 
    if (key == p->data){
        return p;
    } else if (key < p->data){
        return recursiveSearch(p->left, key);
    } else {
        return recursiveSearch(p->right, key);
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
    //iterative search
    Node* temp = iterativeSearch(3);
    if (temp != nullptr){
        cout << "Element found\n"<<temp->data << endl;
    } else {
        cout << "Element not found" << endl;
    }
    //recursive search
    if ((recursiveSearch(getRoot(), 11)) != nullptr){
        cout << temp->data << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}