class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        //priority queue
        priority_queue<int> pq(nums.begin(), nums.end());
        
        // push ele
        int ans = 0;
        while(k--){
            ans = pq.top();
            pq.pop();
        }
        return ans;
        
    }
};