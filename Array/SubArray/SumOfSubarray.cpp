#include <iostream>
using namespace std;

int main()
{
    int len;
    cin>>len;
    int arr[len];
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    int cursum ,max_sum=INT_MIN;
    for(int i=0;i<len;i++)
    {   cursum = 0;
        for(int j=i;j<len;j++)
        {
            cursum = cursum + arr[j];
            cout<<cursum<<endl;
            if(cursum>max_sum)
            max_sum = cursum;
        }
    }
    cout<<"\nMax sum subarray is "<<max_sum;

}