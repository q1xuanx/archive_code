class Solution {
    public int countPathsWithXorValue(int[][] grid, int k) {
        int MOD = 1000000007;
        int m = grid.length; 
        int n = grid[0].length; 
        int[][] previous = new int[n][1024];
        int[][] current = new int[n][1024];
        previous[0][grid[0][0]] = 1;
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                for (int z = 0; z < 1024; z++){
                    if (previous[j][z] > 0){
                        if (i + 1 < m){
                            current[j][z ^ grid[i+1][j]] += previous[j][z];
                            current[j][z ^ grid[i+1][j]] %= MOD;
                        }
                        if (j + 1 < n){
                            previous[j+1][z ^ grid[i][j+1]] += previous[j][z];
                            previous[j+1][z ^ grid[i][j+1]] %= MOD;
                        }
                    }
                }
            }
            if (i + 1 < m){
                int[][] temp = previous;
                previous = current;
                current = new int[n][1024];  
            } 
        }
        return previous[n-1][k];
    }
}
