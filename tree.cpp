#include <iostream>
using namespace std;
struct TreeNode
{

    // defining the structure of the node
    int data;        // data stored in node
    TreeNode *left;  // pointer to left child
    TreeNode *right; // pointer to right child

    // constructor to initialize the node
    TreeNode(int value)
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};
// function to perform inorder traversal (Visits nodes in the order Left-Root-Right)
void inOrderTraversal(TreeNode *root)
{
    if (root == nullptr)
        return;
    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

int main()
{

    // create the root node
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    cout << "Tree created succesfully" << endl;
    cout << "Root:" << root->data << endl;
    cout << "left child node:" << root->left->data << endl;
    cout << "right child node:" << root->right->data << endl;

    // perform inorder traversal
    cout << "Inorder Traversal: ";
    inOrderTraversal(root);
    cout << endl;

    return 0;
}