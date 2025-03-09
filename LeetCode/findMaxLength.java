class Solution {
    public int findMaxLength(int[] nums) {
        Map<Integer, Integer> mp = new HashMap<>();
        int sum = 0, res = 0; 
        for(int i = 0; i < nums.length; i++){
            sum += nums[i] == 0 ? -1 : 1; 
            if (sum == 0){
                res = i + 1;
            }else if (mp.containsKey(sum)){
                res = Math.max(res, i - mp.get(sum));
            }else {
                mp.put(sum, i);
            }
        }
        return res;
    }
}
//   0 1 2 3 4 5 6 7 8
//   0 1 1 1 1 1 0 0 0
//  -1 0 1 2 3 4 3 2 1
//   0 1
// 0 0 1
