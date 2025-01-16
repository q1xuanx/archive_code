class Solution {
    private int MAX_VAL = 9999999;
    public int threeSumClosest(int[] nums, int target) {
        int res = MAX_VAL;
        Arrays.sort(nums);
        for (int i = 0; i < nums.length; i++){
            if (i > 0 && nums[i] == nums[i-1]){
                continue; 
            }
            int val = nums[i]; 
            int left = i + 1, right = nums.length - 1; 
            while (left < right){
                int sum = val + nums[left] + nums[right]; 
                if (sum > target){
                    int diff = Math.abs(sum - target); 
                    int diffRes = Math.abs(res - target);
                    if (diff < diffRes){
                        res = sum; 
                    }
                    right--;
                }else if (sum < target){
                    int diff = Math.abs(sum - target); 
                    int diffRes = Math.abs(res - target);
                    if (diff < diffRes){
                        res = sum; 
                    }
                    left++; 
                }else {
                    res = sum; 
                    break; 
                }
            }
        }
        return res;
    }
}
