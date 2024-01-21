#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node * left;
    node * right;

    node (int data)
    {
        this->data=data;
        this->left=nullptr;
        this->right=nullptr;
    }
};

void binary_tree(node* root, int &count)
{

    if(root->left==nullptr || root->right==nullptr)
    {
        count++;
        cout<<"\nthe Number of the Leaf Nod is :"<<count;
                return ;
    }
    binary_tree(root->left,count);
    binary_tree(root->right,count);

}
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
int main()
{
    node *root=nullptr;
    int cmt=0;
   root= buildtree(root);
    binary_tree(root,cmt);
    return 0;
}