class Solution {
    public int[] asteroidCollision(int[] asteroids) {
        Stack<Integer> stack = new Stack<>();
        for (int asteroid : asteroids){
            boolean al = true; 
            while(!stack.empty() && asteroid < 0 && stack.peek() > 0){
                if (stack.peek() < -asteroid){
                    stack.pop();
                    continue; 
                }else if (-asteroid == stack.peek()){
                    stack.pop();
                }
                al = false; 
                break; 
            }
            if (al) stack.push(asteroid);
        }
        int [] temp = new int[stack.size()];
        int i = 0;
        while (!stack.empty()){
            System.out.print(stack.peek()+ " ");
            temp[i] = stack.pop();
            i++;
        }
        int[]res = new int[temp.length];
        for (int j = temp.length - 1, x = 0; j >= 0 && x < temp.length; j--, x++){
            res[x] = temp[j];
        }
        return res; 
    }
}
