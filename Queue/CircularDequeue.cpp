#include <iostream>
using namespace std;

struct CircularQueue
{
    int size;
    int f;
    int r;
    int *arr;
};
int IsEmpty(struct CircularQueue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int IsFull(struct CircularQueue *q)
{
    if ((q->r + 1) % q->size == q->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void EnQueue(struct CircularQueue *ptr, int value)
{
    if (IsFull(ptr))
    {
        cout << "Queue is overflow"
             << "\n";
    }
    else
    {
        ptr->r = (ptr->r + 1) % ptr->size;
        ptr->arr[ptr->r] = value;
        cout << "EnQueue at index " << ptr->r << " element is :" << value << "\n";
    }
}
int DeQueue(struct CircularQueue *q)
{
    if (IsEmpty(q))
    {
        cout << "Queue is under flow\n";
    }
    else
    {
        q->f++;
        int val = q->arr[q->f];
        cout << "Dequeue at index " << q->f << " Element is :" << val << "\n";
        return 0;
    }
}
int main()
{
    struct CircularQueue *q = (struct CircularQueue *)malloc(sizeof(struct CircularQueue));
    q->size = 6;
    q->f = q->r = 0;
    q->arr = (int *)malloc(q->size * sizeof(int));

    EnQueue(q, 10);
    EnQueue(q, 45);
    DeQueue(q);
    EnQueue(q, 56);
    DeQueue(q);

    return 0;
}