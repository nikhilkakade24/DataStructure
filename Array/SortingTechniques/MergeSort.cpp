#include <iostream>
using namespace std;
void merge(int arr[7],int low,int mid,int high);
void merge_sort(int arr[7],int low,int high)
{ 
   int mid;  
   if(low<high)
   {  mid = (low + high)/2;
     merge_sort(arr,low,mid);
     merge_sort(arr,mid+1,high);
     merge(arr,low,mid,high);
   }
}
void merge(int arr[7],int low,int mid,int high)
{
  int c[7];
  int i=low,j=mid+1,k=low;
  while(i<=mid && j<=high)
  {   if(arr[i]<arr[j])
      {
        c[k] = arr[i];
        i++;
        k++;
      }
      else
      {
        c[k] = arr[j];
        k++;
        j++;
      }
   
  }
  while(i<=mid)
  {
    c[k] = arr[i];
    k++;
    i++;
  } 
  while(j<=high)
  {
    c[k] = arr[j];
    k++;
    j++;
  }
  for(int i=low;i<=high;i++)
  {
    arr[i] = c[i];
  }
}

int main()
{
  int arr[7] = {9,4,2,6,7,1,5};
  merge_sort(arr,0,6);
  for(int i=0;i<7;i++)
  cout<<arr[i]<<" ";
}
