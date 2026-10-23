#include <iostream>
using namespace std;

const int MAX = 5;

class node
{
public:
    int data;
    node* next;

    node(int x)
    {
        data = x;
        next = NULL;
    }
};

class queue
{
private:
    node* front;
    node* rear;

public:
    queue()
    {
        front = NULL;
        rear = NULL;
    }

    void enqueue(int x)
    {
        node* p = new node(x);

        if (empty())
        {
            front = p;
            rear = p;
        }
        else
        {
            rear->next = p;
            rear = p;
        }
    }

    int dequeue(void)
    {
        if (empty())
            return -1;

        int x = front->data;
        node* p = front;
        front = front->next;

        if (front == NULL)
            rear = NULL;

        delete p;
        return x;
    }

    int peek(void)
    {
        if (empty())
            return -1;

        return front->data;
    }

    int empty(void)
    {
        if (front == NULL)
            return 1;
        else
            return 0;
    }

    void display(void)
    {
        node* q = front;

        while (q != NULL)
        {
            cout << "\t" << q->data;
            q = q->next;
        }
    }
};

int main()
{
    int x;
    queue q;

    q.enqueue(11);
    q.enqueue(12);
    q.enqueue(13);
    q.enqueue(14);
    q.enqueue(15);
    q.enqueue(16);

    cout << "queue elements:";
    q.display();

    if (!q.empty())
    {
        x = q.dequeue();
        cout << "\t" << endl << "Removed: " << x;
    }

    cout << endl << "queue after dequeue:";
    q.display();

    if (!q.empty())
    {
        x = q.peek();
        cout << endl << "front element is: " << x;
    }

    return 0;

}


/*
PS D:\Ruturaj>> cd "d:\Ruturaj\" ; if ($?) { g++ queue_using_linkedlist.cpp -o queue_using_linkedlist } ; if ($?) { .\queue_using_linkedlist }
queue elements: 11      12      13      14      15      16
Removed: 11
queue after dequeue:    12      13      14      15      16
front element is: 12 
*/