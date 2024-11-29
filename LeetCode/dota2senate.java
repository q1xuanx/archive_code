class Solution {
    public String predictPartyVictory(String senate) {
        Queue<Integer> rad = new LinkedList<>(); 
        Queue<Integer> dire = new LinkedList<>(); 
        for (int i = 0; i < senate.length(); i++){
            if (senate.charAt(i) == 'R') rad.add(i);
            else dire.add(i);
        }
        int temp = senate.length() + 1; 
        while(rad.size() > 0 && dire.size() > 0){
            System.out.println(rad.peek() + " " + dire.peek());
            if (rad.peek() < dire.peek()){
                dire.remove();
                rad.remove(); 
                rad.add(temp);
                temp+=1;
            }else {
                rad.remove();
                dire.remove(); 
                dire.add(temp);
                temp++;
            }
        }
        if (rad.size() > 0) return "Radiant";
        return "Dire";
    }
}


// if cur == R push R 
