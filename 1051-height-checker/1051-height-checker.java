import java.util.Arrays;

class Solution {
    public int heightChecker(int[] heights) {
        int count=0;
        int[] sorted = Arrays.copyOf(heights,heights.length);
        Arrays.sort(sorted);
        for(int i=0;i<heights.length;i++){
            if(heights[i] != sorted[i]){
               count++;
            }
        }
        return count;
    }
}