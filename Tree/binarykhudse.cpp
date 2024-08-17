#include <iostream>
using namespace std;
struct node
{
    struct node *left = NULL;
    int data;
    struct node *right = NULL;
};

struct node *create(int data)
{
    int leftdata,rightdata;
    if (data == -1)
    {
        return NULL;
    }
    else
    {
        struct node *newnode = new node;
        newnode->data = data;
        cout<<"Enter the left child of the node "<<data<<" - ";
        cin>>leftdata;
        newnode->left=create(leftdata);
        cout<<"Enter the right child of the node "<<data<<" - ";
        cin>>rightdata;
        newnode->right=create(rightdata);
        return newnode;
    }
}

// Logic to display the tree
void inorder_traverse(struct node *root)
{
    struct node *ptr=root;
    if(ptr==NULL)
    {
        return;
    }
    inorder_traverse(ptr->left);
    cout<<ptr->data;
    inorder_traverse(ptr->right);
}

void preorder_traverse(struct node *root)
{
    struct node *ptr=root;
    if(ptr==NULL)
    {
        return;
    }
    cout<<ptr->data;
    preorder_traverse(ptr->left);
    preorder_traverse(ptr->right);
}

void postorder_traverse(struct node *root)
{
    struct node *ptr=root;
    if(ptr==NULL)
    {
        return;
    }
    postorder_traverse(ptr->left);
    postorder_traverse(ptr->right);
    cout<<ptr->data;
}
int main()
{
    int data;
    struct node *root=NULL;
    cout<<"Enter the root node of the tree - ";
    cin>>data;
    if(data!=-1)
    {
        root=create(data);
        cout<<"The inorder traversal will be - ";
        inorder_traverse(root);
        cout<<"The pre-order traversal will be - ";
        preorder_traverse(root);
        cout<<"The post-order traversal will be - ";
        postorder_traverse(root);
    }
    
}