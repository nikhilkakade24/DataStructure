#include <iostream>
using namespace std;

void rotate_byone(int arr[],int n)
{   int j;
    int last = arr[n-1];
    for(j = n-1;j>0;j--)
    {
        arr[j] = arr[j-1];
    }
    arr[j] = last;
    

}
int main()
{
    int len;
    cin>>len;
    int arr[len];
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    rotate_byone(arr,len);
    cout<<"\nArray elements are"<<endl;
   
    for(int i=0 ; i<len ; i++)
     {cout<<arr[i]<<;
      cout<<endl;  
     }
} 