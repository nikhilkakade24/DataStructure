#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int isPrime(int n)
{ int sq = sqrt(n);
  int flag = 0;
  for(int i=2;i<=sq;i++)
  {
    if(n%i==0)
    {
      flag =1;
      break;
    }
  }
  if(flag==1)
  return 0;
  return 1;
}
 
void sum(int arr[],int n)
{ int size = n;
  int sum = 0;
  int flag=0;
  for(int i=0;i<size;i++)
  {
    if(isPrime(arr[i]))
    {
      sum = sum + arr[i];
      flag=1; 
    }
    
  }
  flag==1 ? cout<<"Sum= "<<sum : cout<<"Sum= "<< 0;
}
 
 


 
 


int main()
{ int n=4;
  int arr[4];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  sum(arr,n);
}