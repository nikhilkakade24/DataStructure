#include <iostream>
#include <string>
using namespace std;
int is_operand(char c);
int precedence(char c);
typedef struct stack
{  // size of an array
  int top; //for index of top element
  string arr; //dynamic array in which stack is present
}stack;

void create_stack(stack *st)
{
  //cout<<"\nEnter size of stack";
  
  st->top = -1;
  st->arr="";
  st->arr[st->top]='$';
 
}
void push(stack *st,char c)
{ 
  st->top++;
  st->arr[st->top];
}
void display_stack(stack st)
{ while(st.top != -1)
  {
    cout<<st.arr[st.top]<<" ";
    st.top--;
  }
  cout<<endl;
}
int pop(stack *st)
{ int x = -1;
  if(st->top==-1)
  cout<<"\nStack is empty";
  else{
    x=st->top;
    st->top--;
  
  }
  return x;

}
int is_empty(stack st)
{ if(st.top==-1)
  return 1;
  return 0;

}

bool is_balanced(stack st)
{ bool ans=1;
  for(int i=0;i<st.top;i++)
  { if(st.arr[i]=='(' || st.arr[i]=='{' || st.arr[i]=='[') 
    push(&st,st.arr[i]);

    else if(st.arr[i]==')')
    { if(st.arr[st.top]=='(')
      pop(&st);
      else
      {
        ans = false;
        break;
      }
    }
    else if(st.arr[i]=='}')
    {
      if(st.arr[st.top]=='{')
      pop(&st);
      else{
        ans = false;
        break;
        }
    }
    else if(st.arr[i]==']')
    {
      if(st.arr[st.top]=='[')
      pop(&st);
      else
      {
        ans =false;
        break;

      }
    }
  }
  if(is_empty(st) && ans)
  return true;
  return 0;

}

string infix_postfix(string s,stack st)
{ int i=0;
  string postfix="";
  while(i!=s.size())
  { if(is_operand(s[i]))
    { 
      postfix+=s[i];
      i++;
    }
    else
    { if(precedence(s[i]) > precedence(st.arr[st.top]))
        {push(&st,s[i]);
        i++;
        }
        else
        {
          postfix+=pop(&st);
          
        }
    }

  }
  while(!is_empty(st))
  {
    postfix+=pop(&st);
  }
  return postfix;
}
int is_operand(char c)
{
  if(c=='+' || c =='-' || c=='*' || c=='/')
  return 0;
  else 
  return 1;
}

int precedence(char c)
{ if(c=='+' || c =='-')
  return 1;
  else if(c=='*' || c=='/')
  return 2;
  else
  return 0;

}

int main()
{
  string s;
  stack st;
  // cout<<"\nEnter parenthesis string";
  // cin>>s;
  // create_stack(&st,s);
  //cout<<"\nEnter element to push it into stack";
  // for(int i=0;i<st.size;i++)
  // { 
  //   push(&st,s[i]);
  // }
  // cout<<"\n";
  // display_stack(st); //call by value original top doesnt change

  // pop(&st);
  // cout<<"\nStack after pop becomes: ";
  // display_stack(st);
  // cout<<endl;
  // cout<<is_empty(st);

  //is_balanced(st) ? cout<<"\nString is balanced" : cout<<"\nString is not balanced";
  cout<<"\nEnter infix expression: ";
  cin>>s;
  create_stack(&st);
  //  for(int i=0;i<st.size;i++)
  //  { 
  //   push(&st,s[i]);
  //  }
  //display_stack(st);
  cout<<"\nThe corresponding postfix expression is: "<<infix_postfix(s,st);
  
}