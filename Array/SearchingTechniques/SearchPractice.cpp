#include <iostream>
using namespace std;
int b_search(int arr[],int key,int low,int high)
{  int mid;
   while(low<=high)
   {
     mid = (low+high)/2;
     if(arr[mid]==key)
     return mid;

     else if(arr[mid]>key) 
     high = mid -1;
     else
     low = mid+1;
   }
   return -1;

}
int b_search_rec(int arr[],int low,int high,int key)
{ 
  if(low<=high)
  {
   int mid =(low+high)/2;
   if(arr[mid]==key)
   return mid;
   else if(arr[mid]>key)
    b_search_rec(arr,low,mid-1,key);
   else if(arr[mid]<key)
    b_search_rec(arr,mid+1,high,key);  
  }
  else
  return -1;
}
int main()
{
  int n,key;
  cout<<"\nEnter size of sorted array";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<"\nEnter key for searching";
  cin>>key;
  //cout<<b_search(arr,key,0,n-1);
  cout<<b_search_rec(arr,0,n-1,key);
}