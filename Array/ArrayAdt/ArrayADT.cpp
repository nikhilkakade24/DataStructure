#include <iostream>
using namespace std;
#define SIZE 10
 int len;

//craetion of array

void creationOfArray(int a[] , int len)
{   cout<<"Enter the "<<len<<" elements of array";
    for(int i=0 ; i<len ; i++)
     cin>>a[i];
    
}

//[1,2,3,4,5]
void displayOfArray(int a[] , int len)
{   cout<<"\nArray elements are"<<endl;
   
    for(int i=0 ; i<len ; i++)
     {cout<<a[i];
      cout<<endl;  
     }
     
}
//[1,2,3,4,5,6]
void append(int a[], int num , int &len)
{   
    a[len] = num;
    len = len+1;
    cout<<"\nArray after append is: ";
    displayOfArray(a,len);
}
//insert "8" at 3rd index
//op [1,2,3,8,4,5,6]
void insert(int a[], int num, int pos,int &len)
{   int i = len;
    for( i;i>pos ; i-- )
    a[i] = a[i-1]; //for shifting from end

    a[pos] = num;
    len = len+1;
    cout<<"\nArray after insert at "<<pos<<" index";
    displayOfArray(a,len);
}

//delete element at 5th position [1,2,3,8,4,5,6]
//op [1,2,3,8,4,6]

void delete1(int a[] , int pos , int &len)

{   for(int i=pos ; i<len-1; i++) //length of array is decreased by 1(so i<len-1)
    a[i] = a[i+1];

    len = len-1;
    displayOfArray(a,len);

} 

int main()
{ 
    int a[SIZE] , num , pos;
    cout<<"\nEnter the length of Array";
    cin>>len;
    creationOfArray(a , len);
    displayOfArray(a , len);

    cout<<"Enter the element which is to be inserted at end"<<endl;
    cin>>num;
    append(a, num , len);


    cout<<"Enter the element and its position in which elment is going to be inserted";
    cin>>num>>pos;
    insert(a ,num ,pos ,len);

    cout<<"Enter the position for delete";
    cin>>pos;
    delete1(a, pos, len);

    

}