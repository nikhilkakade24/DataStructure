#include <iostream>
using namespace std;

typedef struct stack
{ int size; // size of an array
  int top; //for index of top element
  int *arr; //dynamic array in which stack is present
}stack;

void create_stack(stack *st)
{
  cout<<"\nEnter size of stack";
  cin>>st->size;
  st->arr = new int[st->size];
  st->top = -1;
}
void push(stack *st,int x)
{ if(st->top == (st->size-1))
  cout<<"\nStack is overflow";
  else
  {
    st->top++;
    st->arr[st->top] = x;
  }
}
void display_stack(stack st)
{ 
  while(st.top!=-1)
  { cout<<st.arr[st.top]<<" ";
    st.top--;
  }
  cout<<endl;
}
int pop(stack *st)
{ int x = -1;
  if(st->top==-1)
  {
    cout<<"\nStack is empty";
  }
  else
  {
    x =st->arr[st->top];
    st->top--;
    st->size--;
  }
  cout<<"\n";
  return x;
}
int top_element(stack st)
{ int x = -1;
  if(st.top==-1)
  cout<<"\nStack is empty";
  else{
    return st.arr[st.top];
  }
  return x;
}
int is_empty(stack st)
{ if(st.top==-1)
  return true;
  return false;

}
int peek(stack st,int pos) //here we consider our 1st position as top element from stack
{ if(pos<0 && pos>st.size)
  return -1;
  return st.arr[st.size-pos];

}

int main()
{ int x,pos;
  stack st;
  create_stack(&st);
  cout<<"\nEnter element to push it into stack";
  for(int i=0;i<st.size;i++)
  { 
    cin>>x;
    push(&st,x);
  }
  display_stack(st); //call by value original top doesnt change
  cout<<"\n";
  cout<<pop(&st);
 

  cout<<"\nStack after pop becomes:";
  display_stack(st);
  cout<<"\nTop element of stack is: "<<top_element(st);
  cout<<"\nIs empty ?"<<is_empty(st);
  cout<<"\nEnter position for peek:";
  cin>>pos;
  cout<<peek(st,pos);

}