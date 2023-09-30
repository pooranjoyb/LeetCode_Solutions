//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int arr[], int n)
    {
        
        // my solution = Bubble sort -> O(n^2) -> NOT ACCEPTED
        
        // for(int i = 0; i < n; i++){
        //     for(int j = 0; j < n - i - 1; j++){
        //         if(arr[j] > arr[j+1]){
        //             int temp = arr[j];
        //             arr[j] = arr[j+1];
        //             arr[j+1] = temp;
        //         }
        //     }
        // }
        
        // Optimal solution => Using of three pointer algo
        
        int low = 0; int mid = 0;
        int high = n - 1;
        
        while(mid <= high){
            if(arr[mid] == 0){
                swap(arr[low], arr[mid]);
                mid++; low++;
            }
            else if(arr[mid] == 2){
                swap(arr[high], arr[mid]);
                high--;
            }
            else    mid++;
            
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends