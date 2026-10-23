#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node*next;
    node(int x)
    { 
        data=x;
        next=NULL;
    }
};
class stack
{
    private:
    node*top;
    public:
    stack()
    {
        top=NULL;
    }
    void push(int x)
    {
        node*p=new node(x);
        p->next=top;
        top=p;
    }
    int pop(void)
    {
        int x=top->data;
        node*p=top;
        top=top->next;
        delete p;
        return x;
    }
    int peek(void)
    {
        return(top->data);
    }
    int empty(void)
    {
        if(top==NULL)
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
        node*q=top;
        while(q!=NULL)
        {
            cout<<endl<<q->data;
            q=q->next;
        }
    }
};
int main()
{
    int x;
    stack s;

    s.push(11);
    s.push(12);
    s.push(13);
    s.push(14);
    s.push(15);
    s.push(16);
    s.push(17);
    s.push(18);
    s.push(19);
    s.push(20);
    s.push(21);
    s.push(22);
    
    cout<<"stack element:";
    s.display();

    if(!s.empty())
    {
        x=s.pop();
        cout<<endl<<"Removed"<<x;
    }    
    cout<<endl<<"stack after pop:";
    s.display();

    if(!s.empty())
    {
        x=s.peek();
        cout<<endl<<"top element is:"<<x;
    }

    return 0;
}

/*
PS D:\Ruturaj> cd "d:\Ruturaj\" ; if ($?) { g++ stack_using_likedlist.cpp -o stack_using_likedlist } ; if ($?) { .\stack_using_likedlist }
stack element:
22
21
20
19
18
17
16
15
14
13
12
11
Removed22
stack after pop:
21
20
19
18
17
16
15
14
13
12
11
top element is:21
*/