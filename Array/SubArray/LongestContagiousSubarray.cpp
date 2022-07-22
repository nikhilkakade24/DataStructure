#include <iostream>
using namespace std;

int main()
{   int len;
    cin>>len;
    int arr[len];
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    int prediff = arr[1] - arr[0]; //used for store previous diff
    int cnt = 2;  //for tracking the count of particular subarray with same prediff
    int maxsubarrlen = 2; //for tracking the longest subarray length with same difference(pd)
    for(int j=2;j<len;j++)
    {
        if((arr[j]-arr[j-1]) == prediff)
        cnt++;
        else //if diff is not equal to prediff then we change the prediff and cnt = 2
        {   prediff = arr[j] - arr[j-1];
            cnt = 2;
        }
        maxsubarrlen = max(cnt,maxsubarrlen);
    }
    //contagious  = common diff betwn 2 contagious element should be same
    cout<<"\nThe length of longest contagious subarray is "<<maxsubarrlen;

}