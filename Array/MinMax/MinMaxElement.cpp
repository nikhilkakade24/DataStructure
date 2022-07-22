#include <iostream>
#include <climits>
#include <math.h>

using namespace std;

void creationOfArray(int arr[],int n)
{   cout<<"Enter the elements of an array"<<endl;
    for(int i=0; i<n ;i++)
    {
        cin>>arr[i];
    }
}
void display(int arr[],int n)
{
    for(int i=0; i<n ;i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int minNo = INT_MAX;
    int maxNo = INT_MIN;
    int len;
    cout<<"Enter length of an array";
    cin>>len;
    int arr[len];
    creationOfArray(arr,len);
    display(arr,len);
    for(int i=0;i<len;i++)
    {
        minNo = min(arr[i],minNo);
        maxNo = max(arr[i],maxNo);
    }

    cout<<"Max and min no are: "<<maxNo<<" and "<<minNo;
    
}