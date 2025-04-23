class Solution:
    def search(self, nums: List[int], target: int) -> int:
        left, right = 0, len(nums) - 1

        while (left <= right): 
            s = nums[(int)((left + right)/2)]
            if s > target: 
                right-=1
            elif s < target: 
                left+=1
            else: 
                return (int)((left + right)/2)
        
        return -1

        