class Solution {
    public int maxVowels(String s, int k) {
        int res = 0, cnt = 0, j=0;
        for (int i = 0; i < s.length(); i++) {
            if ((i - j + 1) > k){
                res = Math.max(cnt,res);
                if (s.charAt(j) == 'a' || s.charAt(j) == 'e' || s.charAt(j) == 'i' || s.charAt(j) == 'o' || s.charAt(j) == 'u'){
                    if (cnt>0) cnt--;
                }
                j++;
                //cnt = 0;
            }
            if (s.charAt(i) == 'a' || s.charAt(i) == 'e' || s.charAt(i) == 'i' || s.charAt(i) == 'o' || s.charAt(i) == 'u' ){
                cnt++; 
            }
        }
        res = Math.max(cnt,res);
        return res;
    }
}
