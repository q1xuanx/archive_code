class Solution {
    public int findDuplicate(int[] nums) {
        Boolean[] exist = new Boolean[nums.length]; 
        for (int i = 0; i < nums.length; i++){
            if (exist[nums[i]] != null && exist[nums[i]]) {
                return nums[i];
            }
            exist[nums[i]] = true;
        }
        return -1;
    }
}
