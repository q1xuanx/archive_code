class Solution {
    public int longestConsecutive(int[] nums) {
        Set<Integer> numbers = new HashSet<>();
        for (int i : nums) numbers.add(i);
        int res = 0;
        for(int i : numbers){
            // Find start index to begin
            if (!numbers.contains(i - 1)){
                int length = 1; 
                while(numbers.contains(i + length)){
                    length++;
                }
                res = Math.max(res, length);
            }
        }
        return res;
    }
}
