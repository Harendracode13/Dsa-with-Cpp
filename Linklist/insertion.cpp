
/*
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    //constructer
    Node(int data)
    {
        this->data=data;
        this->next=NULL;

    }
};

struct Node * insertatfrist(struct Node * ptr,int value)
{
    ptr->data=value;
    ptr->next =head;

}
int main()
{
  struct Node *head=(struct Node *)malloc(sizeof(struct Node));
}*/
#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node* next;
};

void linklistTravels(struct Node* ptr) {
    while (ptr != nullptr) {
        cout << "Value in Node is : " << ptr->data << "\n";
        ptr = ptr->next;  // Move to the next node
    }
}

void insertatfirst(struct Node*& head, int newData) {
    struct Node* newNode = new Node;
    newNode->data = newData;
    newNode->next = head;
    head = newNode;
}

int main() {
    struct Node* head = new Node;  // Using new for memory allocation
    struct Node* second = new Node;
    struct Node* third = new Node;

    cout << "Linked list created\n";

    head->data = 5;  // This is the head node
    head->next = second;

    second->data = 9;
    second->next = third;

    third->data = 78;
    third->next = nullptr;

    cout << "Linked list before insertion at the beginning:\n";
    linklistTravels(head);

    // Inserting a node at the beginning
    insertatfirst(head, 3);

    cout << "\nLinked list after insertion at the beginning:\n";
    linklistTravels(head);

    return 0;
}
