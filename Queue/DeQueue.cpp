#include<iostream>
using namespace std;
struct Queue{
    int size;
    int f;
    int r;
    int* arr;
};
int isfull(struct Queue *ptr)
{
    if(ptr->r==ptr->size-1)
    {
        return 1;
    }
    else{
        return 0;
    }

}

void EnQueue(struct Queue * ptr,int value){
    if(isfull(ptr))
    {
      cout<<"queue is full"<<"\n";
    }
    else{
        ptr->r++;
        ptr->arr[ptr->r]=value;
        cout<<"EnQueue at index "<<ptr->r<<" element is :"<<ptr->arr[ptr->r]<<"\n";
        return ;
    }

}
int DeQueue(struct Queue *ptr)
{
    if(ptr->f==ptr->r)
    {
        cout<<"Queue is Empty"<<"\n";
    }
    else{
       ptr->f++;
       int value=ptr->arr[ptr->f];
       cout<<"Dequque at index "<<ptr->f<<" element is :"<<value<<"\n"; 
       return 0;
    }
}


int main()
{
    struct Queue *q=(struct Queue *)malloc(sizeof(struct Queue));
    q->size=10;
    q->f=q->r=-1;
    q->arr=(int *)malloc(q->size*sizeof(int));
    cout<<"Queue is created\n";

    DeQueue(q);
    EnQueue(q,25);
    EnQueue(q,60);
    DeQueue(q);
    EnQueue(q,70);
    DeQueue(q);
      
    return 0;
}

