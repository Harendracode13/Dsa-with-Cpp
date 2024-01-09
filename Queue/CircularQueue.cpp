#include<iostream>
using namespace std;

struct Queue {
    int size;
    int f;
    int r;
    int *arr;
};

int IsFull(struct Queue *q)
{
    if((q->r+1)%q->size ==q->f)
    {
        return 1;
    }
    else{
        return 0;
    }
}

void EnQueue(struct Queue *ptr,int value)
{
    if(IsFull(ptr))
    {
        cout<<"Queue is overflow"<<"\n";
    }
    else{
        ptr->r=(ptr->r+1)%ptr->size;
        ptr->arr[ptr->r]=value;
        cout<<"EnQueue at index "<<ptr->r<<" element is :"<<value<<"\n";
    }
}
int main()
{
    struct Queue *q=(struct Queue *)malloc(sizeof(struct Queue));
    q->size=10;
    q->f=q->r=0;
    q->arr=(int *)malloc(q->size*sizeof(int));

    EnQueue(q,10);
    EnQueue(q,45);
    EnQueue(q,66);
    
 return 0;
}