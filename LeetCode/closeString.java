class Solution {
    public boolean closeStrings(String word1, String word2) {
        if (word1.length() != word2.length()) return false; 
        int[]frq1 = new int[26];
        int[]frq2 = new int[26];
        for (int i = 0; i < word1.length(); i++){
            frq1[word1.charAt(i) - 'a']++;
            frq2[word2.charAt(i) - 'a']++;
        }
        for(int i = 0; i < frq1.length; i++){
            if (frq1[i] == frq2[i]) continue;
            if (frq1[i] == 0 || frq2[i] == 0) return false; 
        }
        Arrays.sort(frq1);
        Arrays.sort(frq2);
        for (int i = 25; i >= 0; i--){
            if(frq1[i] != frq2[i]) return false;
            if (frq1[i] == 0) break;
        }
        return true;

    }
}
