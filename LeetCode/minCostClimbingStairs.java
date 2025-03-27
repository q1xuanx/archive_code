class Solution {
    public int minCostClimbingStairs(int[] cost) {
        int f = cost[0]; 
        int s = cost[1]; 
        for (int i = 2; i < cost.length; i++){
            int cur =  cost[i] + Math.min(f,s);
            //System.out.println(i + ": "+ f + " " + s);
            f = s; 
            s = cur;
        }
        return Math.min(f,s);
    }
}
