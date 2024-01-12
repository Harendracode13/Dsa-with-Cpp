#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node* next;
};

void linklistTravels(struct Node* ptr) {
    while (ptr != nullptr) {
        cout << "Value in Node is : " << ptr->data << "\n";
        ptr = ptr->next;  
    }
}

// by this function we can insert at the front
void insertatfirst(struct Node*& head, int value) {
    struct Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

// by this function we can insert in between of linklist
void insertatbetween(struct Node* prevNode, int value) {
    if (prevNode == nullptr) {
        cout << "Previous node cannot be null.\n";
        return;
    }

    struct Node* newNode = new Node;
    newNode->data = value;
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

//by this function we can inser at end
void insertatend(struct Node* head, int value) {
    struct Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        // If the list is empty, make the new node the head
        head = newNode;
    } else {
        // Traverse to the last node
        struct Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }

        // Insert the new node at the end
        temp->next = newNode;
    }
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

    cout << "Linked list before insertion:\n";
    linklistTravels(head);

    // call insertion function
    insertatfirst(head, 3);
    
    //call insertatbetween
    insertatbetween(head,78);

    //call insertatend
    insertatend(head,60);

    
    cout << "\nLinked list after insertion:\n";
    linklistTravels(head);


    return 0;
}
