class Solution {
    public int maxOperations(int[] nums, int k) {
        Arrays.sort(nums);
        int left = 0, right = nums.length - 1, res = 0; 
        while (left < right){
            int total = nums[left] + nums[right];
            if (total < k){
                left++;
            }else if (total > k){
                right--;
            }else {
                left++;
                right--;
                res++;
            }
        }
        return res;
    }
}
