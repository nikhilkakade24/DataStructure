#include <iostream>
#include <math.h>
using namespace std;


int check_cube(int n)
{ int num = cbrt(n);
  for(int i=1;i<num+1;i++)
  {
      int pow = i*i*i;
      if(pow==n)
      return 1;
  }
  return 0;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int cnt;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    for(int i=0;i<n;i++)
    {
        int x = check_cube(arr[i]);
        if(x)
        cnt++;
    }
    cout<<cnt;
}



