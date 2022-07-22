#include <iostream>
using namespace std;
void maxSubSum(int arr[],int n)
{
  int cursum=0;
  int max = INT_MIN;
  for(int i=0;i<n;i++)
  {
    cursum = cursum + arr[i];
    if(cursum>max)
    max = cursum;

    if(cursum<0)
    cursum = 0;
    
  }
 cout<<max;
}

void maxSubSumUsingBruteforce(int arr[],int n)
{  
  int max=INT_MIN;
  int sum;
  for(int i=0;i<n;i++)
  { sum = 0;
    for(int j=i;j<n;j++)
    { 
      sum += arr[j];
      if(sum>max)
      max = sum;
    }
  }
  cout<<max;
}

int main()
{ int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  //maxSubSum(arr,n); 
  maxSubSumUsingBruteforce(arr,n);
}