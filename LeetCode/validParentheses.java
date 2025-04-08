class Solution {
    public boolean isValid(String s) {
        Stack<Character> stack = new Stack<>(); 
        if (s.length() == 1) return false;
        char [] ss = s.toCharArray();
        for (char c : ss){
            if (c == '[' || c == '(' || c == '{'){
                stack.push(c);
            }else {
                if (stack.empty()) return false;
                if(!valid(stack.peek(), c)){
                    return false;
                }
                stack.pop();        
            }
        }
        return stack.empty() ? true : false;
    }

    boolean valid (char s1, char s2) {
        if (s1 == '(' && s2 == ')' || s1 == '[' && s2 == ']' || s1 == '{' && s2 == '}'){
            return true;
        }
        return false;
    }
}
 