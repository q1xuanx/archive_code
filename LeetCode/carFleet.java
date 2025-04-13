class Solution {
    public int carFleet(int target, int[] position, int[] speed) {
        Map<Integer, Double> m = new TreeMap<>(Collections.reverseOrder());
        for (int i = 0; i < position.length; ++i){
            m.put(position[i], (double)(target - position[i]) / speed[i]);
        }
        int res = 0;
        double curr = 0.0;
        for (double time : m.values()){
            //System.out.println(time);
            if (time > curr){
                curr = time;
                res++;
            }
        }
        return res; 
    }
}