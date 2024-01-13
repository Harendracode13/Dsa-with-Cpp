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
    int i = 1;
    do
    {
        cout << "at Index " << i << " value is :" << ptr->data << "\n";
        i = i + 1;
        ptr = ptr->next;
    } while (ptr != head);
}
struct Node *insertatFirst(struct Node *head, int Value)
{
    struct Node *ptr = new Node;
    ptr->data = Value;
    struct Node *p = head->next;

    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}
struct Node *insertatindex(struct Node *head, int Value, int Index)
{
    struct Node *ptr = head;
    int i = 1;
    while (i != Index - 1)
    {
        ptr = ptr->next;
        i++;
    }
    struct Node *p = new Node;
    p->data = Value;
    p->next = ptr->next;
    ptr->next = p;
    return head;
}

struct Node *insertatend(struct Node *head, int Value)
{
    struct Node *ptr = head->next;
    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    struct Node *p = new Node;
    p->data = Value;
    p->next = head;
    ptr->next = p;
    return head;
}
int main()
{
    struct Node *head = new Node;
    struct Node *N1 = new Node;
    struct Node *N2 = new Node;
    struct Node *N3 = new Node;

    head->data = 34;
    head->next = N1;

    N1->data = 56;
    N1->next = N2;

    N2->data = 90;
    N2->next = N3;

    N3->data = 23;
    N3->next = head;

    cout << "Circularlinklist Before\n";
    travels(head);

    head = insertatFirst(head, 13);

    head = insertatindex(head, 06, 3);

    head = insertatend(head, 9);
    
    cout << "Circular linkist after \n";
    travels(head);

    return 0;
}