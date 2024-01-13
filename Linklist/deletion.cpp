#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void travels(struct Node *head)
{
    struct Node *ptr = head;
    for (int i = 0; ptr != nullptr; i++)
    {
        cout << "value at " << i + 1 << " Node is:" << ptr->data << "\n";
        ptr = ptr->next;
    }
}

// deletion at first
struct Node *deletionatfirst(struct Node *head)
{
    struct Node *ptr = head;
    if (ptr == nullptr)
    {
        cout << "linklist is emprty";
    }
    else
    {
        head = head->next;
        free(ptr);
        return head;
    }
}

// deletion at index linklist
struct Node *deletionatindex(struct Node *head, int index)
{
    struct Node *p = head;
    for (int i = 1; i < index - 1 && p != nullptr; i++)
    {
        p = p->next;
    }
    struct Node *Q;
    Q = p->next;
    p->next = Q->next;
    free(Q);
    return head;
}

// deletion at end of linklist
struct Node *deletionatend(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;

    while (q->next != nullptr)
    {
        p = p->next;
        q = q->next;
    }
    p->next = nullptr;
    free(q);
    return head;
}

int main()
{
    struct Node *head = new Node;
    struct Node *second = new Node;
    struct Node *third = new Node;
    struct Node *fourth = new Node;

    head->data = 34;
    head->next = second;

    second->data = 60;
    second->next = third;

    third->data = 68;
    third->next = fourth;

    fourth->data = 90;
    fourth->next = nullptr;

    cout << "Before deletion\n";
    travels(head);
     head=deletionatfirst(head);
     head=deletionatindex(head,2);
    head = deletionatend(head);

    cout << "after deletion\n";
    travels(head);

    return 0;
}