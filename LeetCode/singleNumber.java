class Solution {
    public int singleNumber(int[] nums) {
        Map<Integer, Integer> cnt = new HashMap<>();
        for (int i = 0; i < nums.length; i++){
            if (!cnt.containsKey(nums[i])){
                cnt.put(nums[i], 1);
            }else {
                cnt.put(nums[i], cnt.get(nums[i]) + 1);
            }
        }
        int excp = -1;
        for (Map.Entry<Integer, Integer> entry : cnt.entrySet()){
            if (entry.getValue() == 1){
                return entry.getKey();
            }
        }
        return excp; 
    }
}
