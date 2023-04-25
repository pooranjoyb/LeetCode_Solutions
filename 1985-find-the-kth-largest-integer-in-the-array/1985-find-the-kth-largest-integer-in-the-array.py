class Solution:
    def kthLargestNumber(self, nums: List[str], k: int) -> str:
        nums = [eval(i) for i in nums]
        while(k > 1):
            nums.remove(max(nums))
            k = k-1
            
        return str(max(nums))
            
            