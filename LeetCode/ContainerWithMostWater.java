class Solution {
    public int maxArea(int[] height) {
        int i=0, j=height.length-1, mx = 0;
        while (i < j){
            mx = Math.max(mx, (j - i) * Math.min(height[i], height[j]));
            if (height[i] < height[j]) i++;
            else j--;
        }
        return mx;
    }
}
