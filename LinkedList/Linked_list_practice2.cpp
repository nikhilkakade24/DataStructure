#include <iostream>
using namespace std;

typedef struct node
{
  int data;
  struct node *next;
}node;
node *first=NULL;
node * creation(int n)
{ node *head=NULL;
  node *t,*last;
  for(int i=0;i<n;i++)
  {
    if(head==NULL)
    {
      head = new node();
      cout<<"\nEnter data in head node";
      cin>>head->data;
      head->next = NULL;
      last = head;
    }
    else
    {
      t = new node();
      cout<<"\nEnter data in node";
      cin>>t->data;
      t->next = NULL;
      last->next = t;
      last = t;
    }
  }
  return head;
}
void count(node *head)
{  node *t = head;
   int cnt=0;
   while(t!=NULL)
   {
     cnt++;
     t = t->next;
   }
   cout<<"\nNo of nodes are:"<<cnt;
}

void display(node *head)
{
  cout<<"\nElements of linked list are:";
  node *t = head;
  while(t!=NULL)
  {
    cout<<t->data<<" ";
    t = t->next;
  }
}
node *insertion(node *head,int pos)
{ node *t,*p=head;
  if(pos==0) //at beginning
  {
    node *t = new node();
    cout<<"\nEnter data:";
    cin>>t->data;
    t->next = head;
    head =t;
  }
  else
  {
    for(int i=0;i<pos-1 &&p ;i++)
    { 
       p = p->next;
    } 
    if(p)
    {
    cout<<"\nEnter data:";
    t = new node();
    cin>>t->data;
    t->next = p->next;
    p->next = t;
    }
    else
    {
      cout<"\nYou have entered wrong position";
    }

  }
  return head;
}

node *delete_n(node *head,int pos)
{
  node *p,*q;
  if(pos==1)
  {
    p =head;
    head = head->next;
    delete p;
  }
  else
  { p = head;
    for(int i=0;i<pos-1 && p ;i++)
    {
      q = p;
      p=p->next;
    }
    q->next = p->next;
    delete p;
  }
  return head;
}
node *reverse(node *head)
{
  node *p,*q,*r;
  p=head;
  while(p!=NULL)
  {
     r = q;
     q = p;
     p = p->next;
     q->next =r;
  }
  head = q;
  return head;
}
void *rec_reverse(node *q,node *p)
{  if(p!=NULL)
   {
     rec_reverse(p,p->next);
     p->next = q;
   }
   else
   {first =q;}
}

int main()
{ node *head = NULL;
  int n,pos,d;
  cout<<"\nEnter no of nodes";
  cin>>n;
  head = creation(n); 
  display(head);
  count(head);
  cout<<"\nEnter position for insertion";
  cin>>pos;
  head = insertion(head,pos);
  display(head); 

  // cout<<"\nEnter position for delete";
  // cin>>pos;
  // head = delete_n(head,pos);
  // display(head);
  
  // head = reverse(head);
  // cout<<"\nElements after revers operation are:";
  // display(head);

   rec_reverse(NULL,head);
  display(first);
}
