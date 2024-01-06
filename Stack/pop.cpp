#include<iostream>
using namespace std;

struct stack{
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
int ISEmpty(struct stack *ptr)
{
    if(ptr->top==-1)
    {
       return 1;
    }
    else{
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
    cout<<"pushing elemrnt is :"<<value<<"\n";
    }
}

int pop(struct stack *sp)
{
    if(ISEmpty(sp))
    {
        cout<<"stack is under flow"<<"\n";
    }
    else{
        int value=sp->arr[sp->top];
        sp->top--;
        cout<<"poped element is : "<<value<<"\n";
        return value;
    }
}


int main()
{
    struct stack *sp=(struct stack *)malloc(sizeof(struct stack));
    sp->size=10;
    sp->top=-1;
    sp->arr=(int *)malloc(sp->size*sizeof(int));
    cout<<"creating stack "<<"\n";

    push(sp,46);
    push(sp,13);
    pop(sp);
    return 0;
}