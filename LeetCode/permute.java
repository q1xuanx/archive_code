class Solution {
    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> temp = new ArrayList<>();
        backtrack(ans, temp, nums);
        return ans; 
    }
    void backtrack(List<List<Integer>> ans, List<Integer> temp, int[] nums){
        if (temp.size() == nums.length){
            ans.add(new ArrayList<>(temp));
            return;
        }
        for (int i = 0; i < nums.length; i++){
            if (temp.contains(nums[i])) continue;
            temp.add(nums[i]);
            backtrack(ans,temp,nums);
            temp.remove(temp.size() - 1);   
        }
    }
}
