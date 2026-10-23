#include <iostream>
using namespace std;
const int MAX = 5;
class queue
{
private:
    int a[MAX];
    int front;
    int rear;
public:
    queue()
    {
        front = -1;
        rear=-1;
    }
void enqueue(int x)
    {
        if(front==-1 && rear==-1)
        {
            front++;
            rear++;
        }
        else
        {
            rear++;
        }
        a[rear]=x;
    }
int dequeue(void)
    {
        int x = a[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front++;
        }
        return x;
    }
int peek(void)
    {
        return a[front];
    }
int full(void)
    {
        if (rear==MAX-1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
int empty(void)
    {
        if (front==-1 && rear==-1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
void display(void)
    {
        for (int i =front; i<=rear; i++)
        {
            cout << "\t" << a[i];
        }
    }
};

int main()
{
    int x;
    queue q;
    
    if (!q.full()) q.enqueue(11);
    if (!q.full()) q.enqueue(12);
    if (!q.full()) q.enqueue(13);
    if (!q.full()) q.enqueue(14);
    if (!q.full()) q.enqueue(15);
    if (!q.full()) q.enqueue(16);

    cout << "queue elements:";
    q.display();

    if (!q.empty())
    {
        x = q.dequeue();
        cout << "\t"<< endl << "Removed: " << x;
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



/*/
PS D:\Ruturaj> cd "d:\Ruturaj\" ; if ($?) { g++ queue.cpp -o queue } ; if ($?) { .\queue }
queue elements: 11      12      13      14      15
Removed: 11
queue after dequeue:    12      13      14      15
front element is: 12
*/


