// Queue Using Linklist
#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void travels(struct Node *f)
{
    struct Node *N1 = f;
    int count1 = 0;
    while (N1 != nullptr)
    {
        count1++;
        cout << "At " << count1 << " Node Value is :" << N1->data << "\n";
        N1 = N1->next;
    }
}

int IsEmpty(struct Node *q)
{
    if (q == nullptr)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int IsFull(struct Node *q)
{
    struct Node *n = new Node;
    if (q == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void EnQueue(struct Node *&f, struct Node *&r, int value)
{

    if (IsFull(r))
    {
        cout << "Queue is Overflow\n";
    }
    else
    {
        struct Node *N1 = new Node;
        N1->data = value;
        N1->next = nullptr;
        if (f == nullptr)
        {
            f = r = N1;
        }
        else
        {
            r->next = N1;
            r = N1;
        }
    }
}

struct Node *DeQueue(struct Node *&f)
{
    struct Node *N1 = new Node;
    if (f == nullptr)
    {
        cout << "Queue is under flow\n";
    }
    else
    {
        N1 = f;
        f = f->next;
        cout << "Dequeue At " << 1 << " Node Value is :" << N1->data << "\n";
        free(N1);
    }

    return f;
}

int main()
{
    struct Node *front = new Node;
    struct Node *rear = new Node;
    front = rear = nullptr;
    cout << "Linklist is created\n";
    EnQueue(front, rear, 67);
    EnQueue(front, rear, 13);
    EnQueue(front, rear, 93);
    cout<<"Travels before Dequeue \n";
    travels(front);
    front = DeQueue(front);
    EnQueue(front, rear, 3);
    cout<<"Travels after Dequeue \n";
    travels(front);

    return 0;
}