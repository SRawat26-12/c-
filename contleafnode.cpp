#include<iostream>
using namespace std;
int c;
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
int preorder(node *root)
{

    if(root==NULL)
    {

        return 0;

    }
    cout<<root->data<<"\t";
    preorder(root->left);
    preorder(root->right);
    if(root->left==NULL&&root->right==NULL)
    {

        c++;
    }
    return c;


}


int main()
{
    node *root=new node(10);
    root->left=new node(2);
    root->right=new node(50);
    root->right->left=new node(60);
    cout<<preorder(root);


}
