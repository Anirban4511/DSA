#include <iostream>
using namespace std;
struct TreeNode
{
    int value;
    struct TreeNode *left;
    struct TreeNode *right;
    // constructor to initialise the node with a value
    TreeNode(int val)
    {
        value = val;
        left = NULL;
        right = NULL;
    }
};

void printBinaryTree(struct TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    // Traverse the left subtree
    printBinaryTree(root->left);
    //print the value of the present node
    cout<<root->value<<" ";
    //Traverse the right subtree
    printBinaryTree(root->right);
}

int main()
{
    TreeNode *root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    //creates a left child for the root's left node
    root->left->left=new TreeNode(4);
    root->left->right=new TreeNode(5);
    //print the binary tree elements using in order traversal
    printBinaryTree(root);
}