class evalRpn {
    public int evalRPN(String[] tokens) {
        Stack<Integer> stack = new Stack<>();
        int result = 0;  
        for (int i = 0; i < tokens.length; i++){
            if (tokens[i].equals("+")){
                stack.push(stack.pop() + stack.pop());
            }
            else if (tokens[i].equals("-")) { 
                int a = stack.pop(), b = stack.pop(); 
                stack.push(b - a); 
            }
            else if (tokens[i].equals("*")) {
                stack.push(stack.pop() * stack.pop());
            }
            else if (tokens[i].equals("/")){
                int a = stack.pop(), b = stack.pop(); 
                stack.push((int) (b / a));
            }
            else {
                stack.push(Integer.parseInt(tokens[i])); 
            }
        }
        return stack.pop();
    }
}
