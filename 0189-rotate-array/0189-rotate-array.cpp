class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        k = k % size;
         vector<int> newArr;
         for(int i = size - k; i < size; i++){
             newArr.push_back(nums[i]);
         }
          for(int i = 0; i < size - k; i++){
              newArr.push_back(nums[i]);
          }
         for(int i = 0; i < size; i++){
             nums[i]=newArr[i];
         }
    }
};