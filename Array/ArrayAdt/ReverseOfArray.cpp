#include <iostream>
using namespace std ;

int reverse_array(int a[],int n)
{ for(int i=0 , j=n-1; i<=j ; i++,j--)
    {   int temp = a[i];
        a[i] = a[j];
        a[j] = temp;

    } 
    cout<<"\nReverse array is: "<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    
}
int main()
{
    int a[6];
    cout<<"Enter elemets of array";
    for(int i=0;i<7;i++)
    {
        cin>>a[i];
    }
    reverse_array(a,7);
   
}
