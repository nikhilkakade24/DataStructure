#include <iostream>
using namespace std;
typedef struct node
{
  int data;
  struct node *next;
}node;
struct node *top=NULL; //initially top is null

void push(int x) //here we push element from front side
{
  node *t = new node();
  if(t==NULL)
  cout<<"\n Stack is overflow";
  else
  { t->data = x;
    t->next = top;
    top = t;

  }
}
int pop() //here pop out element from front side
{
  node *t;
  int x = -1;
  if(top==NULL)
  {
    cout<<"\nStack is empty";
  }
  else
  {
   t = top;
   top = top->next;
   x = t->data;
   delete t;
  }
  return x;
}
void display()
{
  node *t = top;
  while(t!=NULL)
  {
    cout<<t->data<<" ";
    t= t->next;
  }
  cout<<"\n";
}
int is_full()
{
  node *t = new node();
  if(t==NULL)
  {
    return 1;
  }
  return -1;
}
int is_empty()
{
  if(top==NULL)
  return 1;
  return -1;
}
int top_elemet()
{
  if(top!=NULL)
  return top->data;
  return -1;
}
int main()
{ 
  push(10);
  push(20);
  push(30);
  push(40);
  display();
  cout<<pop();
  cout<<pop();
  cout<<pop();
  

  cout<<"\n"<<is_empty();
  cout<<"\n"<<top_elemet();
  
}