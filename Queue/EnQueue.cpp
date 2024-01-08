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
int main()
{
     struct Queue *q=(struct Queue*)malloc(sizeof(struct Queue));
     q->size=10;
     q->f=q->r=-1;
     q->arr=(int*)malloc(q->size* sizeof(int));
      
      cout<<"queue is created"<<"\n";

     EnQueue(q,40);
     EnQueue(q,45);
    

    return 0;
}
