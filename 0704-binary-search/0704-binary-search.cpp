class Solution {
public:
    int search(vector<int>& nums, int target) {
    int size = nums.size();
        
    //using binary search
    
    int low = 0, high = size - 1, mid;
    while (high >= low) {
        mid = (low + high) / 2;
        if (nums[mid] == target) {
            return mid;
        }
        else if (target > nums[mid]) {
            low = mid + 1;
        } 
        else if (target < nums[mid]){
            high = mid - 1;
        }
        else return -1;
    }
    return -1;
    }   
};
