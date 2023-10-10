//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        int j = 1;
        vector<int> newarr;
        unordered_map<int,int> m;

        for(int i=0;i<n;i++){
            m[arr[i]]++;
            if(m[arr[i]]==2){
               newarr.push_back(arr[i]);
            }
        }
        if (newarr.empty())  newarr.push_back(-1);
        sort(newarr.begin(), newarr.end());
        return newarr;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends