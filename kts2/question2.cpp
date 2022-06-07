#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

struct Stack
{
    Node *head;
};

void CreateStack(Stack &s)
{
    s.head = NULL;
}

Node *CreateNode(int init)
{
    Node *node = new Node;
    node->data = init;
    node->next = NULL;
    return node;
}

int IsEmpty(Stack s)
{
    if (s.head == NULL)
        return 1;
    return 0;
}

void Push(Stack &s, Node *node)
{
    if (IsEmpty(s))
        s.head = node;
    else
    {
        node->next = s.head;
        s.head = node;
    }
}

int Pop(Stack &s)
{
    if (IsEmpty(s))
        return 0;
    Node *node = s.head;
    int data = node->data;
    s.head = node->next;
    delete node;
    return data;
}

int Top(Stack s)
{
    if (IsEmpty(s))
        return 0;
    return s.head->data;
}

void DestroyStack(Stack &s)
{
    Node *node = s.head;
    while (s.head != NULL)
    {
        s.head = node->next;
        delete node;
        node = s.head;
    }
}

void PrintStack(Stack s)
{
    Node *node = s.head;
    while (node != NULL)
    {
        cout << node->data << ' ';
        node = node->next;
    }
}
int sizeofstack(Stack s)
{
    int Size=0;
    Node *node = s.head;
    while (node != NULL)
    {
        Size++;
        node = node->next;
    }
    return Size;
}
void slove(int n, Stack &a, Stack &b)
{
    Node *node;
    int sd = n%10;
    if( sd%2==0 )
    {
        node=CreateNode(sd);
        Push(b,node);
    }
    else
    {
        node=CreateNode(sd);
        Push(a,node);
    }
    n=n/10;
    if(n==0) return;
    slove(n,a,b);
}
int main()
{
    int n;
    cout<<"Imput N = ";
    cin>>n;
    Stack a,b;
    CreateStack(a);
    CreateStack(b);
    slove(n,a,b);

    cout<<"The number of odd digits of N = "<<n<<" is "<<sizeofstack(a)<<" with odd digits ={";
    PrintStack(a);
    cout <<"}"<<endl;

    cout<<"The number of even digits of N = "<<n<<" is "<<sizeofstack(b)<<" with even digits ={";
    PrintStack(b);
    cout <<"}"<< endl;

    return 0;
}
