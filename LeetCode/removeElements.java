class Solution {
    
    public int removeElement(int[] nums, int val) {
        Arrays.sort(nums);
        int res = 0, j = 0; 
        for (int i : nums){
            if (i == val){
                res++;
            }
        }
        int [] temp = new int[nums.length - res];
        for (int i = 0; i < nums.length; i++){
            if (nums[i] != val){
                temp[j] = nums[i];
                j++;
            }
        }
        j = 0;
        for (int i : temp){
            System.out.println(i);
            nums[j] = i;
            j++;
        }
        return temp.length;
    }
}
