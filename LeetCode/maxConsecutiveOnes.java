class Solution {
    public int longestOnes(int[] nums, int k) {
        int j = 0, cnt = 0, res = 0, t = k; 
        for (int i = 0; i < nums.length; i++){
            if (nums[i] == 0){
                cnt++; 
                while(cnt > k){
                    int val = nums[j++];
                    if (val == 0) cnt--;
                }
            }
            res = Math.max(res, i - j + 1);
        }
        //res = Math.max(res,cnt);
        return res; 
    }
}
