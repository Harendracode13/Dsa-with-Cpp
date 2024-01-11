/*
#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node * next;
};

 void linklistTravels(struct Node *ptr)
 {
    while(ptr !=nullptr)
    {
        cout<<"Value in Node is : "<<ptr->data<<"\n";
        ptr->next; 
    }
 }

int main()
{
    struct Node *head;
    head=(struct Node *)malloc(sizeof(struct Node));

    struct Node *second;
    second=(struct Node *)malloc(sizeof(struct Node));

    struct Node *third;
    third=(struct Node *)malloc(sizeof(struct Node));
    cout<<"Linklist created\n";

    head->data=5;//this is head node
    head->next=second;

    second->data=9;
    second->next=third;

    third->data=78;
    third->next= nullptr;

   linklistTravels(head);
   free(head);
   free(second);
   free(third);

    return 0;
}
*/
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

    linklistTravels(head);

    // Don't forget to free the allocated memory when you're done with the linked list
    // delete head;
    // delete second;
    // delete third;

    return 0;
}
