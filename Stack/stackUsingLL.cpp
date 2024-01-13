// In this code we perfom stack function using linklist

# include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

int IsEmpty(struct Node * top)
{
    if(top==nullptr)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int IsFull(struct Node * top)
{
    struct Node *n=new Node;
    if(top==n)
    {
        return 1;
    }
    else{
        return 0;
    }
}
void push(struct Node* &top,int Value)
{
    if(IsFull(top))
    {
        cout<<"Stack is Full\n";
    }
    else{
        struct Node * n=new Node;
        n->data=Value;
        n->next=top;
        top=n; 
        cout<<"pusing element is :"<<n->data<<"\n";  
    }
}


struct Node* pop(struct Node* top)
{
    if(IsEmpty(top))
    {
        cout<<"Stack is Empty\n";
        return nullptr;
    }
    else{
         struct Node* n=top;
         top=top->next;
         int value=n->data;
         free(n);
         cout<<"poping element is :"<<value<<"\n";
         return top;
    }
}
void peep(struct Node* top)
{
    struct Node *ptr=top;
    while(ptr!=nullptr)
    {
        cout<<"element in stack is :"<<ptr->data<<"\n";
        ptr=ptr->next;
    }
}

int main()
{
   struct Node* Top=nullptr;
   push(Top,45);
   push(Top,13);
   Top=pop(Top);
   push(Top,6);
   peep(Top);

   return 0;

}