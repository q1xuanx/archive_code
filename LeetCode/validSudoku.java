class Solution {
    public boolean isValidSudoku(char[][] board) {
        Set<String> used = new HashSet<>();
        for (int i = 0; i < 9; i++){
            for (int j = 0; j < 9; j++){
                char number = board[i][j];
                if (number == '.') continue;
                if (!used.add(number + " row " + i) || !used.add(number + " col " + j) || !used.add(number + " block: " + i/3 + "-" + j/3)){
                    return false;
                }
            }
        }
        return true;
    }
}
