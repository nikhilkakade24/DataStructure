#include <iostream>
using namespace std;

int fib(int n)
{
  int t0 =0,t1 = 1;
  int sum=0;
  int fib=-1;
  for(int i=2;fib<=n;i++)
  {
    fib = t0 + t1;
    t0 = t1;
    t1 = fib;
    if(fib%2==0 && fib<n)
    {
      sum+=fib;
    }
    if(fib==n)
    {
      return fib;
    }
  }
  return sum;
}
int main()
{
  int n;
  cin>>n;
  cout<<fib(n);
}