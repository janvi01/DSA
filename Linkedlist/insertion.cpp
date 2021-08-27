#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* next;
};
Node* head=NULL;
void insertfront(int x)
{
    Node *temp = new Node;
    temp->data = x;
    temp->next = head;
    head = temp;
}
void insertend(int acdata){
    Node* temp=new Node;
    temp->data=acdata;
    temp->next=NULL;
    if(head==NULL)
    head=temp;
    else{
        Node* p=head;
        while(p->next!=NULL)
        p=p->next;
        p->next=temp;
    }

}
void display(Node *head){
    Node *p=head;
    while(p->next!=NULL){
        cout<<p->data<<"\n";
        p=p->next;
    }

}
int main(){
    insertfront(7);
    insertend(2);
    insertfront(9);
    insertend(4);
    insertend(6);
    display(head);
    return 0;


}