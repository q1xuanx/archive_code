class Solution {
    public boolean checkInclusion(String s1, String s2) {
        int [] frq = new int[26];
        for (int i = 0; i < s1.length(); i++){
            frq[s1.charAt(i) - 'a']++;
        }
        int start = 0, end = 0;
        while(end < s2.length()){
            frq[s2.charAt(end)-'a']--;
            while(frq[s2.charAt(end)-'a'] < 0){
                frq[s2.charAt(start)-'a']++;
                start++;
            }
            boolean flag = true;
            for(int i=0;i<26;i++){
                if (frq[i] != 0){
                    flag = false;
                    break;
                }
            }
            if (flag && end - start + 1 == s1.length()) return true;
            end++;
        }
        return false;
    }
}
