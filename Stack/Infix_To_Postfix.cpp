#include <iostream>
using namespace std;

typedef struct stack
{ int size; // size of an array
  int top; //for index of top element
  char *arr; //dynamic array in which stack is present
}stack;

void create_stack(stack *st)
{
  // cout<<"\nEnter size of stack";
  // cin>>st->size;
  st->arr=new char[10];
  st->size=10;
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

int is_empty(stack st)
{ if(st.top==-1)
  return true;
  return false;

}
int is_operand(char c)
{ if(c=='+' || c=='-' || c=='*' || c=='/' || c=='(' || c==')')
  return 0;
  return 1;
}
int pre(char c)
{
  if(c=='+' || c=='-')
  return 1;
  else if(c=='*' || c=='/')
  return 2;
  else
  return 0;
}

char *infix_to_postfix(char *s,stack st)
{ char *postfix= new char[10];
  int i=0,j=0;
  while(s[i]!='\0')
  { if(is_operand(s[i]))
    {
      postfix[j]=s[i];
      j++;
      i++;
    }
    else if(s[i]=='(')
    {
      push(&st,s[i]);
      i++;
    }
    else if(s[i]==')')
    { 
      while(st.arr[st.top]!='(')
      { postfix[j]=pop(&st);
        j++;
      }
      pop(&st);
      i++;
    
    }
    else 
    { if(pre(s[i]) > pre(st.arr[st.top]))
      {push(&st,s[i]);
        i++;
      }
      else
      {
        postfix[j]=pop(&st);
        j++;
      }

    }

  }
  while(!is_empty(st))
  {
    postfix[j] = pop(&st);
    j++;
  }
  return postfix;

}
int main()
{ stack st;
  create_stack(&st);
  cout<<"\nEnter infix operation"; 
  char *str=new char[10];
  cin>>str;
  cout<<infix_to_postfix(str,st);

}