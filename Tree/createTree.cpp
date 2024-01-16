#include<iostream>

using namespace std;

class Node{
     
     public:
     int data;
     Node* left;
     Node* right;

     Node(int data)
     {
        this->data=data;
        this->left=nullptr;
        this->right=nullptr;
     }
};

Node* buildtree(Node *root)
{
    cout<<"Enter the data: ";
    int data;
    cin>>data;
    cout<<"\n";
    root=new Node(data);
    
    if(data==-1)
    {
        return nullptr;
    }

    cout<<"Enter data for inserting in left "<<data<<":\nif you don't Want enter in left side then enter -1: \n";
    root->left=buildtree(root->left);
    cout<<"Enter data for inserting in right "<<data<<":\nif you don't Want enter in left side then enter -1: \n";
    root->right=buildtree(root->right);

    return root;
}

int main()
{
      Node * root=nullptr;

      root=buildtree(root);

    return 0;
}