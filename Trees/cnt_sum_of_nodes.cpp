#include <iostream>
using namespace std;

typedef struct node
{
  int data; 
  struct node *left;
  struct node *right;
  node(int x)
  {
    data = x;
    left = NULL;
    right = NULL;
  }
}node;

node *createTree()
{ 
  node *root ;
  cout<<"\nEnter data in a node";
  int data;
  cin>>data;
  root = new node(data); //used for creating new node
  if(root->data == -1)
  return NULL;
  cout<<"\nEnter data to left of "<<root->data;
  root->left = createTree();

  cout<<"\nEnter data to right of "<<root->data;
  root->right = createTree();
  
  return root;
} 

void preorder(node *root)
{  //root->left->right
    if(root!=NULL)
    {
      cout<<root->data<<" ";
      preorder(root->left);
      preorder(root->right);
    }
}
int count_nodes(node *root)
{
  if(root==NULL)
  return 0;
  return count_nodes(root->left) + count_nodes(root->right) + 1; 
}
int sum(node *root)
{
  if(root==NULL)
  return 0;
  return sum(root->left) + sum(root->right) + root->data;
}
int height(node *root)
{
  if(root==NULL)
  return 0;
  int l = height(root->left);
  int r = height(root->right);
  return max(l,r) + 1; 
}
int main()
{
  node *root;
  root = createTree();
  preorder(root);
  cout<<"\n";
  cout<<"\nNo of nodes in tree are: "<<count_nodes(root);
  cout<<"\nSum of all nodes in a tree are: "<<sum(root)<<endl;
  //height of a binary tree is nothing but it is the distance between root and depeest node
  cout<<"\nHeight of a binary tree: "<<height(root);

}