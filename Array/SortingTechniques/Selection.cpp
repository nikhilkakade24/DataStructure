#include <iostream>
using namespace std;
//In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray
//Time Complexity:o(n^2) irespective of array is sorted or not , it takes o(n) for swaps
void selection_sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int j,k;
        k = i;
       //after each iteration we get smallest element 
      //k is used to find minimum element index afte each iteration  
        for(j=i+1;j<n;j++)
        {  
            if(arr[j]<arr[k])
            k = j;
        }
        swap(arr[i],arr[k]);
        
    }   
    
}
//call by reference
void swap(int &x,int &y)
{   int temp = x;
    x= y;
    y = temp;

}
void display(int arr[],int n)
{   for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }

}

int main()
{   
    int len;
    cout<<"\nEnter the length of an array: ";
    cin>>len;
      
    int arr[len];
    cout<<"\nEnter the elements in an array: ";
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    selection_sort(arr,len); 
    cout<<"Elements after sorting are:"<<endl; 
   display(arr,len);  

}