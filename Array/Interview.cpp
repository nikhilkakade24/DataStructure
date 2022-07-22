// input 1 gives output A
// input 26 gives output Z
// input 27 gives output AA
// input 53 gives output BA
// 238?

#include <iostream>
using namespace std;
 


  int main()
  { int n = 8;
     int arr[] = {1, -1, 3, 2, -7, -5, 11, 6 };
     int new_arr1[n]={0};
     int new_arr2[n]={0};
     int l=0;
     for(int i=0;i<n;i++)
     {
         if(arr[i]>=0)
         {
             new_arr1[l] = arr[i];
             l++;
         }
        //  if(arr[i]<0)
        //  {
        //      new_arr2[i] = arr[i];
        //  }
     }
     int j=0,k=0,i=0;
     while(new_arr1[j]!=0)
     {  
         arr[i] = new_arr1[j];
         i++;
         j++;
     }
     while(new_arr2[k]!=0)
     {
         arr[i] = new_arr2[k];
         i++;
         k++;
     }
     j=0;
     while(new_arr1[j]!=0)
     {
       cout<<new_arr1[j];
       j++;
     }
     
}