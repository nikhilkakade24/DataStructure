#include <iostream>
using namespace std;

int main()
{
  int n;
  cout<<"\nEnter size of sorted array";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int first=INT_MIN,second=INT_MIN;
  for(int i=0;i<n;i++)
  { 
     if(arr[i]>first)  
     {
       second = first;
       first = arr[i];
     }
     else if(arr[i]>second && arr[i]!=first)
     {
       second = arr[i]; 
     }
  }

  cout<<"2nd maximum element is:"<<second;
}