class Solution {
    public int equalPairs(int[][] grid) {
        List<List<Integer>> col = new ArrayList<>();
        List<List<Integer>> row = new ArrayList<>(); 
        for (int i = 0; i < grid.length; i++){
            List<Integer> c1 = new ArrayList<>();
            List<Integer> r1 = new ArrayList<>();
            for (int j = 0; j < grid.length; j++){
                r1.add(grid[i][j]);
                c1.add(grid[j][i]);
            }
            col.add(c1);
            row.add(r1);
        }
        int res = 0;
        for(int i = 0; i < col.size(); i++){
            for (int j = 0; j < row.size(); j++){
                if (col.get(i).equals(row.get(j))) res++;
            }
        }
        return res;
    }
}
