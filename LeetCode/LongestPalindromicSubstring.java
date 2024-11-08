class Solution {
    int start = 0, end = 0;
    public String longestPalindrome(String s) {
        isValid(s, 0);
        return s.substring(start,end+1);
    }
    public void isValid (String s, int i){
        int left = i, right = i, n = s.length(); 
        if (i >= n - 1) return; 
        while (right < n - 1 && s.charAt(right) == s.charAt(right+1)){
            right++;
        }
        i = right; 
        while(left > 0 && right < n - 1 && s.charAt(left-1) == s.charAt(right+1)){
            left--; 
            right++;
        }
        if (right - left > end - start){
            end = right;
            start = left; 
        }
        isValid(s, i+1);
    }
}
