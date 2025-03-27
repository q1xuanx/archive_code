class Solution {
    public int fib(int n) {
        if (n == 0 || n == 1) return n; 
        int prev_1 = 0; 
        int prev_2 = 1; 
        int cur = prev_1 + prev_2; 
        for (int i =2; i<=n;i++){
            cur = prev_1 + prev_2; 
            prev_1 = prev_2; 
            prev_2 = cur;
        }
        return cur;
    }
}
