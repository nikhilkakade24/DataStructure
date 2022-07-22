//Given an unsorted array arr[] of size N, rotate it by D elements (clockwise). 
#include <iostream>
using namespace std;

int main() {
	//code
	int T,N,D;
    cout<<"Enter test cases";
	cin>>T;
	while(T--)
	{   cin>>N; //no of elements in each testcase
	   //no size of the rotation
	    cin>>D;
	    int arr[N];
	    int i;
	    for(i=0;i<N;i++)
	    {
	        cin>>arr[i];
	        
	    }   
        //temp array is used to store the subarray from  0 to D
	    int temp[D],j=D;
	    for(i=0;i<D;i++)
	    {
	        temp[i] = arr[i];
	    }
        //copy an element from (D to n) to 0th index of arr[] and onwards
	    for(i=0;j<N;j++,i++)
	    {
	        arr[i]=arr[j];

	    }
        //now copy temp array in remaining part of arr[]
	    int k=0;
	    for(i;i<N;i++,k++)
	    {
	        arr[i] = temp[k];
	    }
	    //print the final array after rotation
	    for(i=0;i<N;i++)
	    cout<<arr[i]<<" ";
	    cout<<endl;
	    
	}
	
	return 0;
}