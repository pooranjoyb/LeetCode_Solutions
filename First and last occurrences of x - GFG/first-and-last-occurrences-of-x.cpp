//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    int first, last, flag = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            first = i;
            flag = 1;
                    break;
        }
    }
    
    if(flag == -1){
        return {-1, -1};
    }
    
    for(int i = first; i < n; i++){
        if(arr[i] == x){
            last = i;
        }
    }
    return {first, last};
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends