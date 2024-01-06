#include <iostream>
using namespace std;

struct stack
{
    int size;
    int top;
    int *arr;
};

int IsFull(struct stack *ptr)
{
    if (ptr->top == ptr->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *sp,int value)
{

    if (IsFull(sp))
    {
        printf("the stack is over flow");
    }
    else{
        sp->top++;
      sp->arr[sp->top]=value;
    cout<<"pushing elemrnt is :"<<value;
    }
}

int main()
{
    struct stack *sp=(struct stack *)malloc(sizeof(struct stack));
    sp->size = 80;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    cout<<"Stack is created sucessfully"<<"\n";

    push(sp,56);
    push(sp,13);
    return 0;
}