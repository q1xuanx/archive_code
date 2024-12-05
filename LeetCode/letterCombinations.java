class Solution {
    List<String> ans = new ArrayList<>();
    String[] keyPad = new String[]{"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    public List<String> letterCombinations(String digits) {
        if (digits.length() == 0) return ans; 
        backtrack(digits,0,new StringBuilder(digits));
        return ans;
    }

    void backtrack(String digits, int i, StringBuilder sb) {
        if (i == digits.length()){
            ans.add(sb.toString());
            return; 
        }
        int t = Character.getNumericValue(digits.charAt(i));
        for (char c : keyPad[t].toCharArray()){
            sb.setCharAt(i,c);
            backtrack(digits,i + 1, sb);
        }
    }
}
