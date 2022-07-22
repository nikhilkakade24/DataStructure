#include <iostream>
using namespace std;

int main()
{
  int size;
  cout<<"\nEnter size";
  cin>>size;
  int arr[size];
  
  int max=INT_MIN;
  int second = INT_MIN;
  for(int i=0;i<size;i++)
  {
    cin>>arr[i];
  }
 
  for(int i=0;i<size;i++)
  {
    if(arr[i]>max)
    {
      second = max; 
      max = arr[i]; 

    }
    else 
    { if(arr[i]>second)
      second = arr[i];
    }

  }
  cout<<max<<" "<<second<<endl; 
  // for(int i=0;i<size;i++)
  // {
  //   if(arr[i]!=max)
  //   {
  //     if(arr[i]>second)
  //     second = arr[i]; 
  //   }
  // } 
  // cout<<second;

}