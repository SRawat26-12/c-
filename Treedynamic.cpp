#include<iostream>
using namespace std;
class node{
    public :int data;
    class node *left,*right;
    node(int d)
    {

        data=d;
        left=NULL;
        right=NULL;
    }
};
node *create(node *root)
{

    int x;
    cout<<"enter value"<<endl;
    cin>>x;
    root=new node(x);
    if(x==-10)
    {

        return NULL;
    }
    cout<<"enter value for left node of"<<x<<endl;
    root->left=create(root->left);
    cout<<"enter value for right node of"<<x<<endl;
    root->right=create(root->right);
    return root;

}
void pre(node *root)
{
    if(root==NULL)
    {
        return ;
    }
    cout<<root->data<<"\t";
    pre(root->left);
    pre(root->right);
}
int main()
{

    node *root=NULL;
    root=create(root);
    pre(root);
}
