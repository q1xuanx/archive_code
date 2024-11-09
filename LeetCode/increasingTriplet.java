class Solution {
    public boolean increasingTriplet(int[] nums) {
        int mn1 = Integer.MAX_VALUE, mn2 = Integer.MAX_VALUE;
        for (int i = 0; i < nums.length; i++){
            if (nums[i] <= mn1) mn1 = nums[i];
            else if (nums[i] <= mn2) mn2 = nums[i];
            else return true;
        }
        return false; 
    }
}
