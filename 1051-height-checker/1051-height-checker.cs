public class Solution {
    public int HeightChecker(int[] heights) {
        List<int> ans = new List<int>(heights);
        ans.Sort();
        int[] expected = ans.ToArray();

        int count = 0 ;
        for(int i=0 ; i<heights.Length ; i++){
            if(heights[i] != expected[i]){
                count++;
            }
        }

        return count; 
    }
}