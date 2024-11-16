class Solution {
    public int longestSubarray(int[] nums) {
        int cnt = 0, j = 0, res = 0; 
        for (int i = 0; i <nums.length; i++){
            if (nums[i] == 1) cnt++; 
            else {
                j = i + 1;
                while (j < nums.length){
                    if (nums[j] == 1){
                        cnt++; 
                    }else if (nums[j] == 0) break;
                    j++;
                }
                res = Math.max(res,cnt); 
                cnt = 0; 
            }
        }
        res = Math.max(res,cnt);
        if (res == nums.length) res -= 1;
        return res; 
    }
}
