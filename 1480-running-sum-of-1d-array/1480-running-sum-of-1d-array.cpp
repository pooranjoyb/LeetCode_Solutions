class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size(), sum = 0;
        for(int i = 0; i < n; i++){
            nums[i] += sum;
            sum = nums[i];
        }
        return nums;
    }
};