#include <iostream>
using namespace std;

typedef struct node
{
  int data;
  node *left,*right;
  node(int x)
  {
    data = x;
    left = NULL;
    right  = NULL;
  }
} node;

node *create(node *root)
{  int value;
   if(root==NULL)
   {
     cout<<"\nEnter data in node";
     cin>>value;
     root = new node(value);
   }
   if(root->data==-1)
   return NULL;
  
     cout<<"\nEnter data to left of"<<root->data;
     root->left = create(root->left);

     cout<<"\nEnter data to right of "<<root->data;
     root->right = create(root->right);
  
     return root;

}

void preorder(node *root)
{
  if(root!=NULL)
  {
    
    preorder(root->left);
   
    cout<<root->data<<" ";
    preorder(root->right);
  }
}
node *insert_bst(node *root,int val)
{
   if(root==NULL)
   {
     root = new node(val);
     return root;
   }
   else if(val<root->data)
   {
     root->left = insert_bst(root->left,val);
   }
   else if(val>root->data)
   {
     root->right = insert_bst(root->right,val);
   }
   return root;
}

int main()
{  node *root = NULL;
  // root = create(root);
  
  root=insert_bst(root,10);
  root=insert_bst(root,8);
  root=insert_bst(root,15);
  root=insert_bst(root,20);
  root = insert_bst(root,7);
   preorder(root);


}