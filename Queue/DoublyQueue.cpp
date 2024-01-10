//this is double ended queue
#include <iostream>
using namespace std;

struct Queue {
    int size;
    int f;
    int r;
    int* arr;
};

int isFull(struct Queue *ptr) {
    if(ptr->r == ptr->size - 1)
    {
         return 1;
    }
    else{
        return 0;
    }
}

int isEmpty(struct Queue *ptr) {
     if(ptr->f == ptr->r)
    {
     return 1;
    }
    else{
        return 0;
    }
}

void EnQueueFront(struct Queue *ptr, int value) {
    if (ptr->f > 0) {
        ptr->arr[--(ptr->f)] = value;
        cout << "EnQueue at front, element is: " << ptr->arr[ptr->f] << "\n";
    } else {
        cout << "Cannot EnQueue at front queue is full\n";
    }
}

void EnQueueEnd(struct Queue *ptr, int value) {
    if (isFull(ptr)) {
        cout << "Queue is full\n";
    } else {
        ptr->r++;
        ptr->arr[ptr->r] = value;
        cout << "EnQueue at end element is: " << ptr->arr[ptr->r] << "\n";
    }
}

int DeQueueFront(struct Queue *ptr) {
    if (isEmpty(ptr)) {
        cout << "Queue is Empty\n";
        return -1; 
    } else {
        int value = ptr->arr[ptr->f++];
        cout << "Dequeue at front element is: " << value << "\n";
        return value;
    }
}

int DeQueueEnd(struct Queue *ptr) {
    if (isEmpty(ptr)) {
        cout << "Queue is Empty\n";
        return -1; 
    } else {
        int value = ptr->arr[ptr->r--];
        cout << "Dequeue at end, element is: " << value << "\n";
        return value;
    }
}

int main() {
    struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
    q->size = 10;
    q->f = q->r = q->size; 
    q->arr = (int *)malloc(q->size * sizeof(int));
    cout << "Queue is created\n";

    DeQueueFront(q);
    EnQueueEnd(q, 25);
    EnQueueFront(q, 60);
    DeQueueEnd(q);
    EnQueueEnd(q, 70);
    DeQueueFront(q);

    free(q->arr);
    free(q);

    return 0;
}
