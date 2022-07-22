#include <iostream>
using namespace std;
typedef struct node
{
  int data;
  struct node *next; 

}node;
node *first;
node * creation(int n)
{ node *head = NULL;
  node *t,*last; //t is used for creation of new node and last is used to point last node of cureent linked list
  for(int i=0;i<n;i++)
  { if(head==NULL)
    {
      head = new node();
      cout<<"\nEnter data in first node: "<<endl;
      cin>>head->data;
      head->next = NULL;
      last = head;
    }
    else
    { 
      t = new node();
      cout<<"\nEnter data in node: "<<endl;
      cin>>t->data;
      t->next = NULL;
      last->next = t;
      last = t;
    }
    
  }
  return head;
}
void display(node *head)
{ cout<<"\nElements in an linked list are: "<<endl;
  node *t = head;
  for(t;t!=NULL;t=t->next)
  {
    cout<<t->data<<" ";
  }
    
}
void recursive_display(node *p)
{
  
  if(p!=NULL)
  {
    cout<<p->data<<" ";
    recursive_display(p->next);
  }

}
int count_nodes(node *p)
{ int count = 0;
  for(p;p!=NULL;p=p->next)
  {
    count++;
  }
  return count;

}
int search(node *p,int key)
{ int cnt = 1;
  for(p;p!=NULL;p=p->next)
  { 
    if(p->data==key)
    return cnt;
    cnt++;
  }
  return -1;

}

node* recursive_search(node *p,int key)
{   if(p==NULL)
    return NULL;
    else
    {
      if(p->data==key)
      return p;
      return recursive_search(p->next,key);
    }

}
node* insertion(node *p,int pos,int d)
{ node *head=p,*t;
  if(pos==0)
  { t = new node();
    t->data = d;
    t->next = head;
    head = t;
    return head;
  }
  else
  { 
    for(int i=0;i<pos-1 && p ; i++)
    {
      p = p->next;
    }
    if(p)
    {
      t = new node();
      t->data = d;
      t->next = p->next;
      p->next = t;
    }
    else
    {cout<<"\nPlz enter valid position";
    }
  }
  return head;
}
node *deletion(node* head,int pos)
{ node *p = head,*q;
  if(pos==1)
  {
    head = head->next;
    delete p;
    return head;
  }
  else
  {
    for(int i=0;(i<pos-1 && p);i++)
    { q = p; 
      p = p->next;
    }
    q->next = p->next;
    delete p;
    return head;

  }

}
int is_sorted(node *head)
{   int max = INT_MIN;
    node *p=head; 
    for(p;p!=NULL;p=p->next)
    {
      if(p->data>max)
      max = p->data;
      else
      return 0;
    }  
    return 1;

}
void remove_duplicates(node *head)
{  node *q = head;
   node * p = head->next;
    while(p != NULL)
    {
        if(p->data != q->data)
        {
            q = p;
            p = p->next; 
        }
        else
        {
            q->next = p->next;
            delete p;
            p = q->next;
        }
    }
}
node *reverse(node *head)
{
  node *p=head;
  node *q=NULL,*r=NULL;
  while(p!=NULL)
  {
    r = q;
    q = p;
    p = p->next;
    q->next = r;

  }
  head = q;
  return head;
}
void recursive_reverse(node *q,node*p)
{ 
  if(p!=NULL)
  {
    recursive_reverse(p,p->next);
    p->next = q;
  }
  else 
  { first = q;
  }
}
void make_cycle(int pos,node *head)
{ node *temp=head,*start_node=NULL;
  int cnt = 1; //for getting the address of start node(i.e. node from which cycle gonna be start)
  while(temp->next!=NULL)
  { if(pos==cnt)
    start_node = temp;
    cnt++;
    temp = temp->next;
  }
  temp->next = start_node; //we store the address of (last_node->next = start_node address) i.e. it forms the loop

}
int detection(node *head) 
{ node *fast=head,*slow=head;
  while(fast && fast->next)
  { slow = slow->next;
    fast = fast->next->next; //by two steps
    if(slow==fast)
    return 1;
  }
  return 0;

}
//for removal of cycle we first found point where slow and fast will meet and then we move fast to head and we increment slow and fast by 1 until their next element 
// - point to same element and then we move slow->next to NULL
void remove_cycle(node *head)
{ node *fast=head,*slow=head;
  do
  {
    slow = slow->next;
    fast = fast->next->next;

  } while (slow!=fast);
  fast = head;
  while(slow->next != fast->next)
  {
    slow = slow->next;
    fast = fast->next;
  }
  slow->next = NULL;
}

int main()
{ int ch,n,key,pos,d;
  node *head=NULL;
  do{
      cout<<"\nEnter Your choice \n1)Creation of linked list \n2)display of linked list\n3)No of nodes using loop\n4)Search using loop\n5)Search using recursion"
          <<"\n6)Insertion of node\n7)Deletion of node\n8)Check whether list is sorted or not:\n9)Remove dupicates from list\n10)Reverse of list using loop "
          <<"\n11)Reverse using recursion\n12)Make cycle\n13)Detection of loop using floyds cycle finding algo\n14)Removal of cycle";
      cin>>ch;
      switch (ch)
      {
      case 1:
        cout<<"\nEnter no of node in linked list: ";
        cin>>n;
        head = creation(n);
        break;
      case 2:
       display(head);
       cout<<"\nElements in linked list using recursion are: ";
       recursive_display(head);
       break;   

      case 3:
        cout<<"\nNo of nodes in linked using loop: "<<count_nodes(head);
        break;
      case 4:
        cout<<"\nEnter element for searching: ";
        cin>>key;  
        cout<<"\nElement found at: "<<search(head,key)<<" position";
        break;
      case 5:
        cout<<"\nEnter element for searching: ";
        cin>>key;  
        cout<<"\nElement found at: "<<recursive_search(head,key)<<" position";
        break;  
      case 6:
          cout<<endl<<"Enter position after which you want to insert node: ";
          cin>>pos;
          cout<<"\nEnter data of node: ";
          cin>>d;
          head = insertion(head,pos,d);
          break;
      case 7:
          cout<<"Enter the position for delete operation: ";
          cin>>pos;
          head = deletion(head,pos);
          cout<<"\nElement deleted succesfully";
          break;
      case 8:
          if(is_sorted(head))
          cout<<"\ngiven list is sorted";
          else
          cout<<"\nlist is not sorted";
          break;    
      case 9:
          remove_duplicates(head);
          break;
      case 10:
          head=reverse(head);
          cout<<"Link is reversed successfully:"<<endl;
          display(head);    
          break;
      case 11:
          recursive_reverse(NULL,head);
          cout<<"\nLinked list after recursive reverse will be:";
          head = first;
          display(head);
          break;
      case 12:
          cout<<"\nEnter position at which you want to make cycle: ";
          cin>>pos;
          make_cycle(pos,head);
          cout<<"\nCycle formed suceesfully:"<<endl;
          break;   
      case 13:
          detection(head) ? cout<<"\nCycle is present": cout<<"\nCycle is not present";
          break;
      case 14:
          remove_cycle(head);
          cout<<"\nCycle removed succesfully";
          break;    

      }


  }while(ch!=15);


  
}
