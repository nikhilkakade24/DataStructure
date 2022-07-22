#include <iostream>
using namespace std;

// Values from the unsorted part are picked and placed at the correct position in the sorted part.
//Time Complexity: O(n^2) 
//Auxiliary Space: O(1)
//Boundary Cases: Insertion sort takes maximum time to sort if elements are sorted in reverse order.
//                 And it takes minimum time (Order of n) when elements are already sorted.

void insertion_sort(int arr[],int n)
{   int j,x;
    for(int i=1;i<n;i++)
    {   j = i-1;
        x = arr[i];
        //while loop is used for shifting and finding correct place
        while(arr[j]>x && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = x;

    }
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
    cout<<"\nEnter the no of elements in an array";
    cin>>len;
    int arr[len];
    cout<<"\nEnter the elemets of an array";
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    insertion_sort(arr,len);
    cout<<"\nElements after sorting are"<<endl;
    display(arr,len);
}