#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        this->data = value;
        this->left = nullptr;
        this->right = nullptr;
    }
};

int hight(Node *root)
{
    if (root == nullptr)
    {
        return 0;
    }

    int left = hight(root->left);
    int right = hight(root->right);

    int ans = max(left, right) + 1;
    return ans;
}
Node *buildtree(Node *root)
{
    cout << "Enter the data: ";
    int data;
    cin >> data;
    cout << "\n";
    root = new Node(data);

    if (data == -1)
    {
        return nullptr;
    }

    cout << "Enter data for inserting in left " << data << "\n";
    root->left = buildtree(root->left);
    cout << "Enter data for inserting in right " << data << "\n";
    root->right = buildtree(root->right);

    return root;
}

int main()
{
    Node *root = nullptr;
    root = buildtree(root);
    int ans=hight(root);
    cout << "the height of tree is : " << ans;
    return 0;
}