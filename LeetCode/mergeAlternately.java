class Solution {
    public String mergeAlternately(String word1, String word2) {
        String res = ""; 
        int i1 = 0, i2 = 0; 
        while(i2 < word2.length() || i1 < word1.length()){
            if (i1 < word1.length()){
                res += word1.charAt(i1);
                i1++;
            }
            if (i2 < word2.length()){
                res += word2.charAt(i2);
                i2++;
            }
        }
        return res;
    }
}
