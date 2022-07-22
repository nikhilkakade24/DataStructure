#include <iostream>
using namespace std;

typedef struct node
{
  int data;
  node *left,*right;
  node(int value)
  {
    data = value;
    left = NULL;
    right = NULL;
  }
}node;

node *insertion(int x,node *root)
{
  if(root==NULL)
  {
    root = new node(x);
    return root;
  }
  else
  {
    if(x < root->data)
    root->left = insertion(x,root->left);
    else
    {
      root->right = insertion(x,root->right);
    }
  }
  return root;
}

void inorder(node *root)
{ 
   if(root!=NULL)
   {
     inorder(root->left);
     cout<<root->data<<" ";
     inorder(root->right);
   }
}

node *search(node *root,int key)
{ 
  if(root==NULL)
  {
    cout<<"\nSorry key is not present";
    return NULL;
  }

  if(root->data == key)
  {cout<<"\nElement found at: ";
  return root;
  }

  else if(key<root->data)
  {
    search(root->left,key);
  }
  else
  {
    search(root->right,key);
  }
}
int main()
{ 
   node * root =NULL;
   root = insertion(10,root); 
   root = insertion(20,root);
   root = insertion(30,root);
   root = insertion(5,root);
   root = insertion(15,root);
   inorder(root);

   cout<<search(root,30);
}