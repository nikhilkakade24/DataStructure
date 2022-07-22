#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
  int n,k;
  cin>>n>>k;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  // int cnt=0;
  // int sum;
  // for(int i=0;i<n;i++)
  // { sum=0;
  //   for(int j=i;j<n;j++)
  //   {
  //     sum+=arr[j];
  //     if(sum==k)
  //     cnt++;
  //   } 
  // }
 
//  int prefix[n];
//  prefix[0] = arr[0];
//  for(int i=1;i<n;i++)
//  {
//    prefix[i] = prefix[i-1]+arr[i]; 
//  }

//  for(int i=0;i<n;i++)
//  {
//    for(int j=i;j<n;j++)
//    {
//      if(i==0)
//      sum = prefix[j];
//      else
//      {
//        sum = prefix[j]-prefix[i-1];
//      }
//      if(sum==k)
//      cnt++;
     
//    }
//  }
unordered_map <int,int> mp; 
int sum=0,cnt=0;
 for(int i=0;i<n;i++)
 {
    sum +=arr[i];
    if(sum==k)
    cnt++;
    if(mp.find(sum-k)!=mp.end())
    {
      cnt = cnt + mp[sum-k];
    }
    mp[sum] = mp[sum] + 1;


 } 

  cout<<"\nThe count of subarray with sum k is:"<<cnt;

}