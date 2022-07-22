#include <iostream>
using namespace std;

typedef struct node
{
  int data;
  struct node *left,*right;
  node(int i)
  {
    data = i;
    left = NULL;
    right = NULL;
  } 
}node;

int search(int inorder[],int start,int end,int key)
{
  for(int i=start;i<=end;i++)
  {
    if(key==inorder[i])
    return i;
  }
  return -1;
}

node *buildTree(int inorder[],int preorder[],int start,int end)
{ static int index = 0;
  if(start>end)
  {
    return NULL;
  }
  int curr = preorder[index];
  index++;
  
  node * root = new node(curr);
  if(start==end) //for one node only
  return root;
   
  int pos = search(inorder,start,end,curr); 
  root->left = buildTree(inorder,preorder,start,pos-1);
  root->right = buildTree(inorder,preorder,pos+1,end); 
  
  return root; 
}
node *buildTreeFromInPost(int inorder[],int postorder[],int start,int end)
{
  static int index = 4;
  if(start>end) //base condition
  {
    return NULL;
  }
  int curr = postorder[index];
  index--;
  node *root = new node(curr);
  if(start==end)
  return root;

  
  int pos = search(inorder,start,end,curr);
  root->right = buildTreeFromInPost(inorder,postorder,pos+1,end);
  root->left = buildTreeFromInPost(inorder,postorder,start,pos-1);
  return root;

}

void inorderPrint(node *root)
{ if(root!=NULL)
  {
  inorderPrint(root->left);
   cout << root->data <<" ";
  inorderPrint(root->right);
  
  }
}

int main()
{ //int preorder[] = {1,2,4,3,5};
  int inorder[] = {4,2,1,5,3}; 
  int postorder[] = {4,2,5,3,1};
  //node *x = buildTree(inorder,preorder,0,4);
  //postorderPrint(x);
  node * x = buildTreeFromInPost(inorder,postorder,0,4);
  inorderPrint(x); 
}