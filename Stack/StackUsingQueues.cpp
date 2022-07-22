#include <iostream>
#include <queue>
using namespace std;

class stack
{
  int n;
  queue<int> q1;
  queue<int> q2;
  public:
  stack()
  {
    n= 0;
  }
  void push(int x)
  {
    q2.push(x);
    n++;
    while(!q1.empty())
    {
      q2.push(q1.front());
      q1.pop();
    }
    //for swapping q2 and q1
    queue<int> temp;
    temp = q1;
    q1 = q2;
    q2 = temp;
 
  
  }
  int pop()
  { int x=-1;
    x = q1.front();
    q1.pop();
    n--;
    return x;
  }
  int top()
  {
    return q1.front();
  }
};

int main()
{ stack st;
  st.push(10);
  st.push(20);
  st.push(30);
  cout<<st.pop();
  cout<<endl<<st.top();
 
}