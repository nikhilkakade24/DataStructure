#include <iostream>
using namespace std;

int sortedOrNot(int arr[],int n)
{ if(n==1) //single element is always sorted
  return 1;
  else
  {
    return (arr[0]<arr[1] && sortedOrNot(arr+1,(n-1)));
  }
}

int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<"Hi"<<sortedOrNot(arr,n);
}