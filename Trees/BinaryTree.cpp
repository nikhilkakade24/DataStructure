#include <iostream>
#include <queue>
using namespace std;


struct node 
{
 int data;
 struct node * left,*right;
 node(int val)
 {  data = val;
    left = NULL;
    right = NULL;
 }
};
void preorder(struct node *root)
{ if(root!=NULL)
  {
   cout<<root->data<<" ";
   preorder(root->left);
   preorder(root->right);
  }
}
void inorder(struct node *root)
{ 
 if(root!=NULL)
 { 
 inorder(root->left);
 cout<<root->data<<" ";
 inorder(root->right);
 }
}
void postorder(struct node *root)
{
  if(root!=NULL)
  {
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
  } 
}
node * createTree()
{ struct node *root = NULL;
  int data;
  cout<<"\nEnter data in node";
  cin>>data;
  if(data == -1)
  return NULL;
  
  root = new node(data);
  cout<<"\nEnter data to left of "<<root->data;
  root->left = createTree();
  
  cout<<"\nEnter data to right of "<<root->data;
  root->right = createTree();
  return root;
}

void level_order(struct node *root)
{ if(root==NULL)
  return;
  queue<struct node *> q;
  q.push(root);
  q.push(NULL);

  while(!q.empty())
  { struct node * t = q.front();
    q.pop();
    if(t!=NULL)
    {
      cout<<t->data<<" ";
      if(t->left)
      q.push(t->left);
      if(t->right)
      q.push(t->right);
    }
    else if(!q.empty())
    {
      q.push(NULL);
    }

  }
}
int sum_at_kth_level(struct node *root,int k)
{ if(root==NULL)
  return -1;
  queue<struct node*> q;
  q.push(root);
  q.push(NULL);
  int n=0;
  int sum=0;
  while(!q.empty())
  {
    struct node *t = q.front();
    q.pop();
    if(t!=NULL)
    { sum +=t->data;
      
      if(t->left)
      {
       q.push(t->left);
      }
      if(t->right)
      {
        q.push(t->right);
      }
    }
    else if(!q.empty())
    { if(n==k)
      break;
      sum = 0;
      n++;
      q.push(NULL);
    }
    
  }
  return sum;

}

int main()
{
   // *1
  // struct node * root = new node(1);
  // root->left = new node(2);
  // root->right = new node(3);
  // root->left->left = new node(5);    
  // root->left->right = new node(6); 
  // root->right->left = new node(7);
  // root->right->right = new node(8);
  node *root = createTree();
  // preorder(root);
  // cout<<"\n";
  // inorder(root);
  // cout<<"\n";
  // postorder(root);
  // cout<<endl;
  level_order(root);
  cout<<endl;
  cout<<sum_at_kth_level(root,2);



}
