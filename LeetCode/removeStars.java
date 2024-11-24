class Solution {
    public String removeStars(String s) {
        Stack<Character> stack = new Stack<>();
        for (int i = 0; i < s.length(); i++){
            if (s.charAt(i) == '*' && !stack.empty()){
                stack.pop();
            }else {
                stack.push(s.charAt(i));
            }
        }
        StringBuilder res = new StringBuilder();
        while(!stack.empty()){
            res.append(stack.pop());
        }
        res.reverse();
        return res.toString();
    }
}
