class Solution {
    public int removeDuplicates(int[] nums) {
        int cntCur = 1, j = 0; 
        for (int i = 1; i < nums.length; i++){
            if (nums[i] != nums[j]){
                j++; 
                nums[j] = nums[i];
                cntCur = 1;
            }else if (nums[i] == nums[j] && cntCur < 2){
                j++;
                nums[j] = nums[i];
                cntCur++;
            }
        }
        return j + 1;
    }
}
