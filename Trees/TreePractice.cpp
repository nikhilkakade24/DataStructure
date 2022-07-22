#include <iostream>
#include <queue>
#include <vector>

using namespace std;

typedef struct node 
{
  int data;
  node *left,*right;
  node(int val)
  {
    data = val;
    left = NULL;
    right = NULL;
  }
}node;

int height(node *root,int &d);
node *create_tree()
{
  int data;
  node *root;
  cout<<"\nEnter data in a node";
  cin>>data;
  if(data==-1)
  return NULL;
  root = new node(data);

  cout<<"\nEnter data in left of node"<<root->data;
  root->left = create_tree();

  cout<<"\nEnter data in right of node"<<root->data;
  root->right = create_tree();

  return root;
  
}
void inorder(node *root)
{
  if(root==NULL)
  return ;
  else
  {
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
  }
}
void preorder(node *root)
{
  if(root!=NULL)
  {
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
  }
}
void postorder(node *root)
{
  if(root!=NULL)
  {
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
  }
}

// void level_wise(node *root)
// {
//    queue<node *> q;
//    q.push(root);
//    while(!q.empty())
//    { node *t = q.front();
//      q.pop();
//      cout<<t->data<<" ";
//      if(t->left)
//      q.push(t->left);
//      if(t->right)
//      q.push(t->right);
//    }

// }

void level_wise(node *root)
{
  vector<vector<int> > ans; 
      
        queue<node*> q; 
        q.push(root); 
        while(!q.empty()) {
            int size = q.size();
            vector<int> level; 
            for(int i = 0;i<size;i++) {
                node* t = q.front(); 
                  q.pop(); 
                level.push_back(t->data); 
                if(t->left != NULL) q.push(t->left); 
                if(t->right != NULL) q.push(t->right); 
                
            }
            ans.push_back(level);    
        }
        for(int i=0;i<ans.size();i++)
        {
          for(int j=0;j<ans[i].size();j++)
          {
            cout<<ans[i][j]<<" ";
          }
        }
}
int diameter(node *root)
{  
   int d=0; 
   height(root,d);
   return d; 
}

int height(node *root,int &d)
{
   if(root==NULL)
   return 0;

   int lh = height(root->left,d);
   int rh = height(root->right,d);
   d = max(d,lh+rh);
   return 1+max(lh,rh);   
}
node *insert(int key,node *root)
{
  if(root==NULL)
  {
    node *t = new node(key);
    return t;
  }
  else if(key<root->data)
  {
    root->left = insert(key,root->left);
  }
  else if(key>root->data)
  {
    root->right = insert(key,root->right);
  }
  return root;
}

node *search_bst(int key,node *root)
{   if(root==NULL)
   {cout<<"Key is not found"; 
    return root;
   }

   if(root->data==key)
   return root;

   else if(key<root->data)
   root->left = search_bst(key,root->left);
   else if(key>root->data)
   root->right = search_bst(key,root->right);

}

int main()
{
  node *root = create_tree();
   inorder(root);
   cout<<"\n";
   cout<<"\nDiameter of tree is: "<<diameter(root);
  //  preorder(root);
  //  cout<<"\n";
  //  postorder(root);
  //  level_wise(root);
   //cout<<"\nHeight of a tree is: "<<height(root);

  //  node *root = NULL;
  //  root = insert(10,root);
  //  root =insert(20,root);
  //  root=insert(5,root);
  //  root=insert(15,root);
  //  root=insert(25,root);
  //  root=insert(4,root);
  //  root=insert(6,root);
  //  preorder(root);
  //  int key;
  //  cout<<"\nEnter key";
  //  cin>>key;
  //  node *t=search_bst(key,root);
  //  t!=NULL ? cout<<"\nKey is found at "<<t : cout<<"\nKey is not found";
}