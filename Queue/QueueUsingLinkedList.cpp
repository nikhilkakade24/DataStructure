#include <iostream>
using namespace std;
typedef struct node
{ int data;
 struct node *next;
}node;
node *front=NULL; //they are global variables
node *rear = NULL;

//with the help of rear we insert
void enqueue(int x)
{ node *t = new node();
  if(t==NULL)
  cout<<"\nQueue is full";
  else{
  t->data = x;
  t->next = NULL;
   if(front==NULL) //queue is empty
   { front = t;
     rear = t; 
   } 
  else
  { rear->next = t;
    rear = t; 
  }

  }

}
//with the help of front we dequeue
int dequeue()
{ int x = -1;
  node *t;
  if(front!=NULL)
  {
    x = front->data;
    t = front;
    front = front->next;
    delete t;
  }
  cout<<endl;
  return x;

}

void display()
{ cout<<"\n";
  node * t=front;
  while(t!=NULL)
  {
    cout<<t->data<<" ";
    t = t->next;
  }
  cout<<endl;

}

int main()
{ 
  enqueue(10);
  enqueue(20);
  enqueue(30);
  display();
  cout<<"\n";
  cout<<dequeue();
  //cout<<dequeue();

  display();

}