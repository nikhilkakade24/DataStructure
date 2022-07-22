#include <iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}node;

node *create_node(int n)
{   node *head = NULL;
    node *t , *last;
    int cnt = 0;
    for(int i=0; i < n ;i++)
    {
        if(head==NULL)
        {
            head = new node();
            cout<<"\nEnter data to first node";
            cin>>head->data;
            head->next=NULL;
            last = head;
        }

        else{
        t = new node();
        cout<<"\nEnter data to node";
        cin>>t->data;
        t->next = NULL;
        last->next = t;
        last = t;
        
        }   

    }
   
    return head;
}
//using loop
void display_node(node *head)
{   node *t = head;
    while(t!=NULL)
    {
        cout<<t->data;
        t = t->next;
        cout<<"\t";
    }
}
//using recursion
void recursive_display(node *p)
{   
    if(p!=NULL)
    {   cout<< p->data<<"\t";
        recursive_display(p->next);

    }
}
//using recursion
int count_no_of_nodes(node *p)
{   //breaking condition 
    if(p==0)
    return 0;

    else
    return count_no_of_nodes(p->next) + 1;

}
//using loop
int count(node *p)
{   int cnt = 0;
    while(p!= NULL)
    {
        cnt++;
        p = p->next;
    }
    return cnt;

}

int sum(node *p)
{
    int sum = 0;
    while(p != NULL)
    {
        sum = sum + p->data;
        p = p->next;
    }
    return sum;
}

int max(node *p)
{
    int max = INT_MIN;
    while(p)
    {
        if(p->data > max)
        max = p->data;
        p=p->next;
    }
    return max;
}

node * search(node *p,int key)
{   while (p)
    {   if(key == p->data)
        return p;
        p=p->next;
    }
    return 0;

}
node * recursive_search(node *p , int key)
{
    if(p == NULL)
    return NULL;
    else if(p->data == key)
    return p;
    else
    return recursive_search(p->next , key);
}

node * insertion(node *p , int pos)
{   node * head = p;
    if(pos == 0)
    {
        node *t = new node;
        cout<<"\nEnter data in a node";
        cin>>t->data;
        t->next = p;
        head = t;
        cout<<"\nNode added succesflly";
        return head;
    }
    else
    {
        for(int i=0 ;i<pos-1 && p ;i++)
        {
            p=p->next;

        }
        if(p)
        {
        node * t =new node;
        cout<<"\nEnter data in a node";
        cin>>t->data;
        t->next = p->next;
        p->next = t;
        cout<<"\nNode added succesflly";
        return head;
        }
        else
        cout<<"\nPlz enter valid position";

    }
}
node * sortedInsertion(node *p,int x)
{   node *head = p;
    node *t = new node();
    node *q =NULL;
    t->data = x;
    t->next=NULL;
    
    if(p==NULL)
    {head = t;
    return head;}
    else
    {   while(p && p->data < x) // p!=NULL
        {   q = p; 
            p = p->next;
        }
        if(p==head)
        {
            t->next = head;
            head = t;
            return head;
        }
        else
        { t->next = q->next;
         q->next = t;
         return head;
        }
    }
}
//deletion of 1st node only
node * delete_node(node *p,int pos)
{   node *head ,*q = NULL;
     if(pos==1)
    {   head = p->next;
        delete p;
        cout<<"Node deleted sucessfully";
        return head;
    }
    
  
}
//deletion of other than 1st node 
void delete_node1(node *p,int pos)
{  node *q=NULL;
     for(int i=0;i<pos-1;i++)
        {
            q = p;
            p=p->next; 
        }    
        q->next = p->next;
        delete p;
        cout<<"Node deleted sucessfully";
}
int check_sorted(node *p)
{   int x = INT_MIN;
    while(p != NULL)
    {   if(p->data <x)
        return 0;
        else
        {   x = p->data;
            p = p->next;

        }
    }
    return 1;
}
void duplicates(node *head)
{   node *q = head;
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

int main()
{  node *head=NULL;
    int n ,key ,ch ,pos ,x; 
    node * p,*r;
    
    
    do{
      cout<<"\nEnter Your choice \n1)Creation of linked list \n2)display of linked list\n3)No of nodes using loop\n4)No of nodes using recursion"
            <<"\n5)Search using loop\n6)Search using recursion\n7)Sum of nodes\n8)Maximum element in list\n9)Insertion\n10)sortedInsertion\n11)Deleteion at beginning"
            <<"\n12)Deletion at position\n13)Check list is sorted or not?\n14)Remove duplicates from list";
      cin>>ch;

    switch(ch)
    {   case 1:  
            cout<<"\nEnter no of nodes";
            cin>>n;
            head=create_node(n);
            break;

        case 2:
            display_node(head);
            cout<<"\n";
            // cout<<"Nodes in reverse direction using recursioon are: ";
            // recursive_display(head);
            break;

        case 3:cout<<endl<<"No of nodes using loop are "<<count(head);
                break;

        case 4:cout<<endl<<"No of nodes by using recursion are "<<count_no_of_nodes(head);
                break;

        case 5:cout<<"\nEnter element for searching";
              cin>>key;
               p = search(head , key);
              cout<<"\nElement found at"<<p<<" position";
              break;

        case 6:r = recursive_search(head , key);
               cout<<"\nElement found at"<<r<<" position";
               break;      

        case 7:cout<<endl<<"Sum of data of all nodes is: "<<sum(head);
               break;

        case 8:cout<<endl<<"Maximum element in given linked list is: "<<max(head);
                break;

        case 9:cout<<endl<<"Enter position after which you want to insert node: ";
               cin>>pos;
               head = insertion(head , pos);
               break;   
        case 10:cout<<"Enter data which is going to be inserted in a sorted list";
                cin>>x;     
                head=sortedInsertion(head,x);
                break;        
        
        case 11:cout<<"Enter position of node for delete operation at beginning: ";
                cin>>pos;
                head = delete_node(head,pos);    
                break; 
        case 12:cout<<"Enter position of node for delete operation: ";
                cin>>pos;
                delete_node1(head,pos);
                break;
        case 13:if(check_sorted(head))
                 cout<<"\nList is sorted";
                 else
                 cout<<"\nList is not sorted";   
                break;      
        case 14:duplicates(head);
                break;         
    
    }

    }while(ch!=15);

}