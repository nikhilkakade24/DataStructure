#include <iostream>
using namespace std;
//Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.
//
//Worst and Average Case Time Complexity: O(n*n). 
//Worst case occurs when array is reverse sorted.
//Best Case Time Complexity: O(n). Best case occurs when array is already sorted.
//we use flag for make it adaptive
void bubble_sort(int arr[],int len)
{
    int i,j,flag=0;
    for(int i=0;i<len-1;i++)
    {   for(j=0;j<len-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
            swap(arr[j],arr[j+1]);
            flag = 1;
            }
            
        }
        if(flag == 0)
            break;
    }
    if(!flag)
    cout<<"Array is already sorted"<<endl;

}
void display(int arr[],int n)
{   for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }

}
void swap(int &x,int &y)
{
    int temp = x;
    x = y;
    y  = temp;
}
int main()
{   int len;
    cout<<"\nEnter the no of elements in an array";
    cin>>len;
    int arr[len];
    cout<<"\nEnter the elemets of an array";
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    bubble_sort(arr,len);
    cout<<"Array after sorting is: ";
    display(arr,len);
}