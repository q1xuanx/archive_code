class Solution {
    public int pivotIndex(int[] nums) {
        int []pre = new int[nums.length+1]; 
        for (int i = 0; i < pre.length; i++){
            pre[i] = 0;
        }
        for (int i = 0; i < nums.length; i++){
            pre[i+1] += pre[i] + nums[i];
        }
        int res = -1;
        for (int i = 0; i < nums.length; i++){
            if (pre[i] == pre[pre.length-1] - pre[i+1]){
                res = i;
                break;
            }
        }
        return res;
    }
}
