#include<iostream>
using namespace std;
class node
{

    public:int data;
    class node *left,*right;
    node(int d)
    {

        data=d;
        left=NULL;
        right=NULL;
    }
};
void preorder(node *root)
{

    if(root==NULL)
    {

        return;
    }
    cout<<root->data<<"->";
    preorder(root->left);
    preorder(root->right);

}
void inorder(node *root)
{

    if(root==NULL)
    {

        return ;
    }
    inorder(root->left);
    cout<<root->data<<"\t";
    inorder(root->right);
}
void postorder(node *root)
{

    if(root==NULL)
    {

        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<"\t";
}
int main()
{

    node *root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->right=new node(50);
    root->left->right->left=new node(10);
    cout<<root->data<<"->"<<root->left->data<<"->"<<root->right->data<<"->"<<root->left->right->data<<"->"<<root->left->right->left->data;
    cout<<"\npreorder\n"<<endl;
    preorder(root);
    cout<<"postorder"<<endl;
    postorder(root);
    cout<<"inorder"<<endl;
    inorder(root);
}
