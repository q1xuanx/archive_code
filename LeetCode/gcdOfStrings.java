class Solution {
    public String gcdOfStrings(String str1, String str2) {
        String temp1 = str1 + str2; 
        String temp2 = str2 + str1; 
        if (temp1.equals(temp2)){
            int l1 = str1.length();
            int l2 = str2.length();
            int gcd = GCD(l1,l2); 
            return str1.substring(0,gcd);
        }
        return "";
    }
    int GCD (int x, int y) {
        if (y == 0) return x;
        return GCD(y, x % y);
    }

}
