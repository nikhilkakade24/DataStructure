#include <iostream>
using namespace std;
//time complexity of linear search is o(n)
int linear_search(int arr[],int n,int key)
{   for(int i=0;i<n;i++)
    {
       if(arr[i]==key)
       return i;
    }
    return -1;

}

//time complexity of binary search is o(logn)
//for binary search array should be sorted
int binary_search(int arr[],int n,int key)
{   int low=0,high=n;
  
    while(low<=high)
    {   int mid = (low+high)/2;
        if(key==arr[mid])
        return mid;
        else if(key>arr[mid])
        low = mid+1;
        else if(key<arr[mid])
        high = mid-1;
    }
    return -1;

}
int recursive_bsearch(int a[], int l ,int h ,int x)
{   if(l<=h)
    {
    int mid = (l+h) / 2;
    if(a[mid] == x)
    return mid;
    else if(x < a[mid])
    return recursive_bsearch(a, l , mid-1 , x);

    else
    return recursive_bsearch(a, mid+1, h ,x);
    }
    else return -1;

}


int main()
{
    int len,key;
    cout<<"\nEnter lenght of an array";
    cin>>len;
    int arr[len];
    for(int i=0; i<len;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nEnter the element for search: ";
    cin>>key;

    int index = linear_search(arr,len,key);
    cout<<"Element found at "<<index<<" position";
    index = binary_search(arr,len,key);
    cout<<"\nElement found at "<<index<<" position";
    index = recursive_bsearch(arr,0,len,key);
    cout<<"\nElement found at "<<index<<" position";
    
    
}