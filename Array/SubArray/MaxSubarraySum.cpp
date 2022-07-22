#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
//brute force approach will take o(n^2) time
//normal steps
int max_sum_bruteforce(int arr[],int n)
{   int cur_sum;
    int maxSum = INT_MIN;
    for(int i=0;i<n;i++)
    {   cur_sum = 0;
        for(int j=i;j<n;j++)
        {   
            //it is used for calculating sum of subarray from i to j thelement
            cur_sum = cur_sum + arr[j];
            if(cur_sum>maxSum)
            maxSum = cur_sum;
        }
    }
    
    return maxSum;
}

//it will take o(n^2) time
int max_sum_cumulative(int arr[],int n)
{  //arr = {-1,4,7,-2}
   //then cur_sum becomes {0,-1,3,10,8} 
  int cur_sum[n+1]; //take cumulative array with initial value 0
  cur_sum[0] = 0;  
  int pre_sum = 0;
  for(int i=1;i<=n;i++)
  { cur_sum[i] = cur_sum[i-1] + arr[i-1];
    
  }
  int max_Sum = INT_MIN;
  int diff;
  for(int i=1;i<=n;i++)
  {
      for(int j=0;j<i;j++)
      { diff = cur_sum[i]-cur_sum[j]; //it calculates all the differences from cur_sum[j] to cur_sum[i]
        max_Sum = max(max_Sum,diff);
      }
      
  }
  return max_Sum;
}
//it will take O(n) time 
//it is best out of 3 approaches
//it will work if all elements are negative also
int max_sum_kadane_algo(int arr[],int n)
{   int max_sum=INT_MIN;
    int cur_sum = 0;
    for(int i=0;i<n;i++)
    {   cur_sum = cur_sum+arr[i];
        if(cur_sum>max_sum)
        max_sum = cur_sum;
        if(cur_sum<0)
        cur_sum=0;
    
    }
    return max_sum;
}
void pair_sum(int arr[],int k,int n)
{
   sort(arr,arr+n);
    int low = 0;
    int high = n-1;
    while(low<high)
    {   int sum = arr[low]+arr[high];
       // cout<<sum;
        if(sum==k)
        {
            cout<<"\nElements are found at "<<low<<"and "<<high<<"position";
            return ;       
        }
        else if(sum<k)
        low++;
        else
        high--;
    }
    cout<<-1;

}
int main()
{
    int len;
    cin>>len;
    int arr[len];
    int arrnegative[len];
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
   cout<<"\nMax Sum of subarray using bruteforce approach is "<<max_sum_bruteforce(arr,len);
   cout<<"\nMax sum of subarray using cumulative sum approach is "<<max_sum_cumulative(arr,len);
   cout<<"\nMax sum of subarray using kadens algo approach is "<<max_sum_kadane_algo(arr,len);

   //maximum circular subarray sum
   int wrap_sum,non_wrap_sum;
   //non wrap_sum consists of non wrapping elememt and it can be find with the help of kadens algo
   //e.g {4,-4,6,-6,10,-8} here max subarr sum is 10 and it is non wrapping element
   non_wrap_sum = max_sum_kadane_algo(arr,len); 
   int total_sum = 0;
    for(int i=0;i<len;i++)
    {   
        total_sum+=arr[i];
        arrnegative[i] = -arr[i];
    }
    //e.g {4,-1,1,-5,7}
    //max cirular subarray sum (op)=4+7 = 11
    // 
    //wrap sum consists of wrapping element
    //here we change the sign of every element and apply kadens algo on it and we get sum of non contributing element in opposite sign
    //so make that sum negative and substract from total sum
    //finally we get wrapping element sum
    wrap_sum = total_sum +max_sum_kadane_algo(arrnegative,len); // total_sum-(-(max_sum_kadane_algo(arr,len)))
    cout<<"\nMaximum circular subarray sum is "<<max(wrap_sum,non_wrap_sum);

    //find pair(2 elements) whose sum equal to k
    //here two pointer algo is used and for that array should be sorted
    //it will take o(n) time for finding pair having sum equal to k 
    int k;
    cout<<"\nEnter the value of k";
    cin>>k;
    pair_sum(arr,k,len);
    
}