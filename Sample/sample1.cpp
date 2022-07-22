#include <iostream>
using namespace std;

int main()
{
  int arr[]={19,10,44,3,11,129};
  for(int i=0;i<6;i++)
  {
    if(arr[i]%5 == 4)
    cout<<arr[i]<<" ";
  }
}