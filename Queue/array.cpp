//Implementation of Queue using array
#include <iostream>
using namespace std;
#define maxsize 5

int A[maxsize];
int front = -1;
int rear = -1;

bool isFull()
{
    if (rear == (maxsize - 1))
        return true;
    else
        return false;
}
bool isEmpty()
{
    if (front == -1 && rear == -1)
        return true;
    else
        return false;
}

void enqueue(int x)
{
    if (rear == (maxsize - 1)) //queue is full
        return;
    else if (front == -1 && rear == -1) //queue is empty
    {
        front = 0;
        rear = 0;
        A[rear] = x;
    }
    else
    {
        rear++;
        A[rear] = x;
    }
}
int dequeue()
{ //returns dequeue data
    if (front == -1 && rear == -1)
        return 0;   //empty queue
    else if (front == 0 && rear == 0) //when only single element left in queue
    {
        front = -1;
        rear = -1;
        return A[0];
    }
    else
    {
        int temp = front;
        front++;
        return A[temp];
    }
}

void print()
{
    for (int i = front; i <=rear; i++)
        cout << A[i] << "\n";
}

int main()
{
    enqueue(2);
    enqueue(4);
    enqueue(6);
    enqueue(8);
    enqueue(10);
    print();
    dequeue();
    print();
    return 0;
}