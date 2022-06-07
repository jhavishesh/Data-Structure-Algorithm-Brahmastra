#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int x)
    {
        data=x;
        left=NULL;
        right=NULL;
    }
};
void inorder(Node *root)
{   
    if(!root)
        return;
        
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(Node *root)
{   
    if(!root)
        return;
        
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *root)
{   
    if(!root)
        return;
        
    
    inorder(root->left);
    inorder(root->right);
    cout<<root->data<<" ";
}
int main()
{
    Node *root=new Node(1);
    root->left =new Node(2);
    root->right=new Node(3);
    root->left->left =new Node(4);
    root->left->right=new Node(5);
    cout<<"Preorder"<<" "<<endl;
    preorder(root);
    cout<<"\nInorder"<<" "<<endl;
    inorder(root);
    cout<<"\nPostorder"<<" "<<endl;
    postorder(root);

}
