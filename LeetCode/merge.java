// Trash Solution :(
// Need to optimize this shit
class Solution {
    public int[][] merge(int[][] intervals) {
        Arrays.sort(intervals, (a, b) -> Integer.compare(a[0], b[0]));
        int[][] temp = new int [intervals.length][2];
        for (int i=0; i < temp.length;i++){
            temp[i][0] = -1;
            temp[i][1] = -1;
        }
        for (int i = 0; i < intervals.length; i++){
            int start = intervals[i][0], end = intervals[i][1];
            if (start == -1 && end == -1) continue;
            for (int j = i + 1; j < intervals.length; j++){
                int start1 = intervals[j][0], end1 = intervals[j][1]; 
                if (end >= start1){
                    temp[i][0] = start; 
                    temp[i][1] = Math.max(end1,end);
                    end = temp[i][1];
                    intervals[j][0] = -1;
                    intervals[j][1] = -1;
                }else if (end < start1) {
                    break;
                }
            }
            if (temp[i][0] == -1 && temp[i][1] == -1){
                temp[i][0] = start;
                temp[i][1] = end;
            }
        }
        int realLength = 0; 
        for (int i = 0; i < temp.length; i++){
            int start=temp[i][0], end = temp[i][1];
            if (start != -1 && end != -1) {
                realLength++;
            }
        }
        int[][] result = new int[realLength][2]; 
        int index = 0;
        for (int i = 0; i < temp.length; i++){
            int start=temp[i][0], end = temp[i][1];
            if (start != -1 && end != -1){
                result[index][0] = start; 
                result[index][1] = end; 
                index++;
            }
        }
        return result;  
    }
}
