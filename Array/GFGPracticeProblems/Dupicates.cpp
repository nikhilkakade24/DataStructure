
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        sort(arr,arr+n);
        vector<int> ans;
        int flag,j;
        for(int i=0;i<n-1;i = j)
        {
            flag = 1;
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]==arr[j])
                flag=0;
                else{
                    
                    break;
    
                }
            }
            if(flag==0)
            ans.push_back(arr[i]);
            
        }
        return ans;
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for(int i=0;i<ans.size();i++)
        cout<<ans[i];
        cout << endl;
    }
    return 0;
}
  // } Driver Code Endsa