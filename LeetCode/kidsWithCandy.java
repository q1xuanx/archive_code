class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        List<Boolean> res = new ArrayList<>(); 
        for (int i = 0; i < candies.length; i++){
            int check = candies[i] + extraCandies; 
            boolean val = true;
            for (int j = 0; j < candies.length; j++){
                if (j == i) continue; 
                if (check < candies[j]){
                    val = false; 
                    break;
                }
            }
            res.add(val);
        }
        return res; 
    }
}
