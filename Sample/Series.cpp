#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int N;
  cin>>N;
  int t1=0,t2=0;
  for(int i=1;i<=N;i++)
  {
    if(i%2!=0)
    {if(i>1)
    t1 = t1+2;
    }
    else
    {
      t2 =t1/2;
    }
  }
  if(N%2!=0)
  cout<<t1;
  else
  cout<<t2;
}