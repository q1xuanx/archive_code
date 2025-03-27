class Solution {
    public int climbStairs(int n) {
        if (n == 1 || n == 2) return n;
        int prev_1 = 1;
        int prev_2 = 2;
        int cur = prev_1 + prev_2; 
        for (int i = 3; i <= n; i++){
            cur = prev_1 + prev_2; 
            prev_1 = prev_2;
            prev_2 = cur;
        }
        return cur;
         
    }
}
