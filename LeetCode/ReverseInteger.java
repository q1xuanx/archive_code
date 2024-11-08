class Solution {
    public int reverse(int x) {
        if (x > 2e31 - 1 || x < -2e31){
            return 0;
        }
        return reversed(x);
    }
    public int reversed(int x){
        int res = 0; 
        boolean ok = true;
        if (x < 0){
            x *= -1; 
            ok = false;
        }
        while (x > 0){
            if (res > (Integer.MAX_VALUE - (x % 10)) / 10) return 0;
            res = (res*10) + (x % 10); 
            x/=10;
        }
        return ok ? res : res * -1;
    }
}
