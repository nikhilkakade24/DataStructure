#include <iostream>
using namespace std;

typedef struct stack
{ int *arr;
  int size;
  int top;
}stack;

void create_stack(stack *st)
{ st->size=10;
  st->top = -1;
  st->arr = new int[10];
}
void push(stack *st,int x)
{ 
    st->top++;
    st->arr[st->top]=x;
  
}
int pop(stack *st)
{ int x = -1;
  if(st->top==-1)
  cout<<"\nStack is empty";
  else
  {
    x= st->arr[st->top];
    st->top--;
    st->size--;

  }
  return x;
}
int is_empty(stack st)
{ if(st.top==-1)
  return true;
  return false;
}
int is_operand(char c)
{ if(c=='+' || c=='-' || c=='*' || c=='/')
  return 0;
  return 1;
}

int evaluation(string s,stack st)
{ int res,opd1,opd2;
  int i=0;
  while(s[i]!='\0')
  { if(is_operand(s[i]))
    { push(&st,s[i]-'0');
      i++;
    }
    else
    { opd2=pop(&st);
      opd1=pop(&st);
      switch(s[i])
      { case '+': res = opd1 + opd2;
                  push(&st,res);
                  break;
        case '-': res = opd1 - opd2;
                  push(&st,res);
                  break;
        case '*':res =opd1 * opd2; 
                push(&st,res);
                //cout<<st.arr[st.top];
                break;
        case '/':res = opd1 /opd2;
                 push(&st,res);
                 break;         
      }
      i++;
    }

  }
  return pop(&st);

}

int main()
{ stack st;
  create_stack(&st);
  string s;
  cout<<"\nEnter postfix string";
  cin>>s;
  cout<<"\nThe evaluation of expression is:"<<evaluation(s,st);

}