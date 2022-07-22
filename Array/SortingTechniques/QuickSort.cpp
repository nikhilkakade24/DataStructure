#include <iostream>
using namespace std;
int partition(int a[6],int l,int h);

void quick_sort(int a[6],int low,int high)
{ int j;
  if(low<high)
  { j = partition(a,low,high);
    quick_sort(a,low,j);
    quick_sort(a,j+1,high);
  }
}

int partition(int a[6],int l,int h)
{ int i=l,j=h;
  int pivot = a[l];
  do
  {
    do{ i++;
    }
    while(a[i]<=pivot);
    do
    {
      j--;
    }while(a[j]>pivot);
    if(i<j)
    swap(a[i],a[j]);
  } 
  while (i<j);
  swap(a[l],a[j]); //take care here dont use pivot for swap
  return j; //j is the partiioning position & it is sorted position for pivot element
}
void swap(int &x,int &y)
{
  int temp = x;
  x = y;
  y = temp;
}

int main()
{
  int a[6] = {5,2,8,1,3,INT_MAX}; //INT_MAX acts as terminating for descending order array e.g {5 4 3 2 1 INT_MAX} ;
  quick_sort(a,0,5);
  for(int i=0;i<5;i++)
  {
    cout<<a[i]<<" ";
  }
}