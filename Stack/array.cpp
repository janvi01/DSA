//Implementation of stack using array
#include <iostream>
using namespace std;
#define maxsize 101

int A[maxsize];
int top = -1;
void push(int data)
{
    top++;
    if (top == maxsize)
        cout << "Overflow\n";
    else
        A[top] = data;
}
int pop()
{
    int x = A[top];
    if (top == -1)
        cout << "Empty stack\n";
    else
        top--;
    return x;
}
int Top()
{
    return A[top];
}
void print()
{
    cout << "Stack-->\n";
    for (int i = 0; i <= top; i++)
    {
        cout << A[i] << "\n";
    }
    cout << "\n";
}

int main()
{
    push(2);
    push(4);
    push(6);
    print();
    cout<<Top()<<"\n";
    pop();
    push(7);
    push(1);
    print();
}