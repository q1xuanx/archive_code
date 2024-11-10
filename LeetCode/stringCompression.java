class Solution {
    public int compress(char[] chars) {
        int res = 0; 
        for (int i = 0; i < chars.length;){
            char base = chars[i];
            int cnt = 0;
            while (i < chars.length && chars[i] == base){
                cnt++;
                i++; 
            }
            chars[res] = base;
            res++; 
            if (cnt > 1){
                for (char c : String.valueOf(cnt).toCharArray()){
                    chars[res] = c;
                    res++;
                }
            }
        }
        return res; 
    }
}
