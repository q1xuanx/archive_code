class Solution {
    public List<String> generateParenthesis(int n) {
        List<String> res = new ArrayList<String>();
        backTrack(res,new StringBuilder() ,0,0,n);
        return res;
    }
    public void backTrack (List<String> res, StringBuilder str,int left, int right, int n){
        if (str.length() == n * 2){
            res.add(str.toString());
            return;
        }
        if (left < n){
            str.append("(");
            backTrack(res,str,left+1,right,n);
            str.deleteCharAt(str.length() - 1);
        }
        if (right < left){
            str.append(")");
            backTrack(res,str,left,right+1,n);
            str.deleteCharAt(str.length() - 1);
        }
    }
}
