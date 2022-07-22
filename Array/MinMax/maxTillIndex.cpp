#include <iostream>
#include <climits>
using namespace std;

int main()
{   int len;
    cin>>len;
    int arr[len];
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    int maxno = INT_MIN;
    for(int i=0;i<len;i++)
    {
        maxno = max(maxno,arr[i]);
        cout<<"Max no till index "<<i<<" is "<<maxno<<endl;
    }

}
