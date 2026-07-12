public class Solution {
    public int FindPoisonedDuration(int[] timeSeries, int duration) {
        
        int total = 0 ;

        for(int i=0 ; i<timeSeries.Length-1 ; i++){
            total += Math.Min(duration , timeSeries[i+1] - timeSeries[i]);
        }

        total += duration ;
        return total ;
    }
}