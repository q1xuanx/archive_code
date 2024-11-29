class Solution {
    public String gcdOfStrings(String str1, String str2) {
        String res = "";
        String temp1 = str1 + str2; 
        String temp2 = str2 + str1; 
        if (temp1.equals(temp2)){
            int l1 = str1.length();
            int l2 = str2.length();
            int gcd = GCD(l1,l2); 
            if (str1.length() > 0) return str1.substring(0,gcd);
            else return str2.substring(0,gcd);
        }
        return "";
    }
    int GCD (int x, int y) {
        if (y == 0) return x;
        return GCD(y, x % y);
    }

}
