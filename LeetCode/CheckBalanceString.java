class Solution {
    public boolean isBalanced(String num) {
        int sumOdd = 0; 
        int sumEven = 0; 
        for (int i = 0; i < num.length(); i++){
            if(i % 2 == 0){
                sumEven += num.charAt(i) - '0';
            }else {
                sumOdd += num.charAt(i) - '0';
            }
        }
        return sumOdd == sumEven ? true : false;
    }
}
