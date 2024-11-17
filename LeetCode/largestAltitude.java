class Solution {
    public int largestAltitude(int[] gain) {
        int high = 0, res=0;
        res = Math.max(high,res);
        for (int i = 0; i < gain.length; i++){
            high += gain[i]; 
            System.out.print(high + " ");
            res = Math.max(high,res);
        }
        return res; 
    }
}
