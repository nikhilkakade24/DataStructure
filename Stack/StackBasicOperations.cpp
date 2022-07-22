//using array
#include <iostream>
using namespace std;
#define n 10
class stack
{ public:
   int top;
  int *arr;
  
  stack()
  {
    arr = new int(n);
    top = -1;
  }
  void push(int x)
  { if(top==n-1)
    {cout<<"stack is overflow";
     return; 
    }
    top++;
    arr[top] = x;
  }
  void pop()
  {
    if(top==-1)
    cout<<"\nStack is empty";
    top--;
  }
  int top_element()
  {
    if(top==-1)
    {cout<<"\nNo element in stack";
      return -1;
    }
    return arr[top];
  }

  bool is_empty()
  {
    return top==-1 ? 1:0;
  }
  
};

int main()
{
  stack obj;
  obj.push(1);
  obj.push(2);
  obj.push(3);
  obj.push(4);
  for(int i=0;i<=obj.top;i++)
  {
    cout<<obj.arr[i]<<" ";
  }
  cout<<"\n";
  cout<<obj.top_element()<<"\n";
  obj.pop();
  cout<<obj.top_element()<<"\n";
  obj.pop();
  obj.pop();
  cout<<obj.top_element()<<endl;
  cout<<obj.is_empty()<<endl;
}