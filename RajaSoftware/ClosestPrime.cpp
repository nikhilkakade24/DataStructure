#include <iostream>
#include <cmath>
using namespace std;
int check_prime(int num)
{ int sq = sqrt(num);
  int flag = 0;
  for(int i=2;i<=sq;i++)
  {
    if(num%i==0)
    {
      flag =1;
      break;
    }
  }
  if(flag==1)
  return 0;
  return 1;
}
int main()
{
  int n;
  cin>>n;

 int i,j;
  for(i=n+1;;i++)
  {
    if(check_prime(i)==1)
    break;
  }
  int right = i;
  for(j=n-1;;j--)
  {
    if(check_prime(j)==1)
    break;
  }
  int left = j ;
  if((right-n)<(n-left))
  {
    cout<<"Closest prime number is "<<right;
  }
  else if((right-n)>(n-left))
  {
     cout<<"Closest prime number is "<<left;

  }
  else
  {
     cout<<"Closest prime number is "<<left<<" "<<right;
  }
}