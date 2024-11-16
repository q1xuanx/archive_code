class Solution {
    public int longestSubarray(int[] nums) {
        int cnt = 0, j = 0, res = 0; 
        for (int i = 0; i <nums.length; i++){
            if (nums[i] == 0) cnt++; 
            while (cnt > 1){
                if (nums[j] == 0) cnt--;
                j++; 
            }
            res = Math.max(res, i - j);
        }
        return res; 
    }
}
