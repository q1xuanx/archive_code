/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    
    public void dfs(TreeNode root, List<Integer> leaves){
       if (root == null) return; 
        
       if (root.left == null && root.right == null) {
           leaves.add(root.val); 
       }else {
           dfs(root.left, leaves); 
           dfs(root.right,leaves);
       }
    }
    public boolean leafSimilar(TreeNode root1, TreeNode root2) {
        List<Integer> res1 = new ArrayList<>();
        List<Integer> res2 = new ArrayList<>();
    
        dfs(root1, res1);
        dfs(root2, res2);
        
        return res1.equals(res2);
    }
}