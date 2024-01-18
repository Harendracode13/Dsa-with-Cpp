#include<iostream>
#include<queue>

using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data)
    {
        this->data=data;
        this->left=nullptr;
        this->right=nullptr;
    }
};


node *buildtree(node *root)
{
    cout << "Enter the data: ";
    int data;
    cin >> data;
    cout << "\n";
    root = new node(data);

    if (data == -1)
    {
        return nullptr;
    }

    cout << "Enter data for inserting in left " << data<<"\n";
    root->left = buildtree(root->left);
    cout << "Enter data for inserting in right " << data<<"\n";
    root->right = buildtree(root->right);

    return root;
}

void levelordertravels(node* root)
{
    queue<node*> q;
    q.push(root);

    while(!q.empty())
    {
    node *temp=q.front();
    cout<<temp->data<<" ";
    q.pop();

    if(temp->left)
    {
        q.push(temp->left);
    }
    if(temp->right)
    {
        q.push(temp->right);
    }
    }
}
int main()
{
    node* root=nullptr;

    root=buildtree(root);
    /*   input tree:
              6
             /  \
            /    \
           3      8
          / \    / 
         1   4  7  
    */
    cout<<"level order travels :";
    levelordertravels(root);
    cout<<"\n";

 return 0;
}
 