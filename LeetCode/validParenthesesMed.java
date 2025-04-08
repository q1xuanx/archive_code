class Solution {
    public boolean checkValidString(String s) {
        Stack<Integer> openBrackets = new Stack<>(); 
        Stack<Integer> star = new Stack<>();
        //char [] ss = s.toCharArray();
        for (int i = 0; i < s.length(); i++){
            char c = s.charAt(i);
            if (c == '('){
                openBrackets.push(i);
            }else if (c == '*'){
                star.push(i);
            } else {
                if (!openBrackets.empty()){
                    openBrackets.pop();
                }else if (!star.isEmpty()){
                    star.pop();
                }else {
                    return false;
                }
            }
        }
        while(!openBrackets.isEmpty() && !star.isEmpty()){
            if (openBrackets.pop() > star.pop()){
                return false;
            }
        }
        return openBrackets.isEmpty();
    }

}