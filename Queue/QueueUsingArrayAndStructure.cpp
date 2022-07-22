#include<iostream>
using namespace std;

typedef struct queue 
{
  int size;
  int front,rear;
  int *Q;
}queue;
//used for initialization of queue
void create_queue(queue *q,int x)
{ q->size = x;
  q->front = -1;
  q->rear = -1;
  q->Q = new int[q->size];
} 
void enqueue(queue *q,int x)
{
  if(q->rear==q->size-1)
  cout<<"\nQueue is full";
  else
  { q->rear++;
    q->Q[q->rear]  = x;
  }
}
int dequeue(queue *q)
{ int x=-1;
  if(q->front==q->rear)
  cout<<"\nQueue is empty";
  else
  { q->front++;
    x = q->Q[q->front]; 
  }
  return x;
}
void display(queue q)
{ for(q.front=q.front+1; q.front<=q.rear ;q.front++)
    cout<<q.Q[q.front]<<" ";
  cout<<endl;
}

int isempty(queue q)
{
  if(q.front==q.rear)
  return 1;
  return 0;
}

int main()
{
  queue q;
  int size;
  cout<<"\nEnter the size of queue";
  cin>>size;
  create_queue(&q,size);
  enqueue(&q,10);
  enqueue(&q,20);
  enqueue(&q,30);
  enqueue(&q,40);
  enqueue(&q,50);
  
  display(q);

  cout<<dequeue(&q)<<endl;
  cout<<dequeue(&q)<<endl;
  cout<<dequeue(&q)<<endl;
  cout<<dequeue(&q)<<endl;
  cout<<dequeue(&q)<<endl;
  cout<<isempty(q)<<endl;      
  display(q);
}