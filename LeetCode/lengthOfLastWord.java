class Solution {
    public int lengthOfLastWord(String s) {
        StringBuilder res = new StringBuilder();
        res.append(s.trim());
        res.reverse();
        int length = 0;
        for (int i=0; i < res.length(); i++){
            if (res.charAt(i) != ' ') {
                length++;
            }else break;
        }
        return length;
    }
}
