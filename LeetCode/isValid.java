class Solution {
    public boolean isValid(String s) {
        Stack<Character> q = new Stack<>();
        if (s.length() == 1) return false; 
        for (int i = 0; i < s.length(); i++){
            char c = s.charAt(i); 
            if (c != ')' && c != '}' && c != ']'){
                q.push(c);
                System.out.println(c);
            }else {
                if (q.empty()){
                    return false; 
                }
                char b = q.pop(); 
                if (!(b == '(' && c == ')' || b == '{' && c == '}' || b == '[' && c == ']')){
                    return false; 
                }
            }
        }
        if (!q.empty()) return false;
        return true; 
    }
}
