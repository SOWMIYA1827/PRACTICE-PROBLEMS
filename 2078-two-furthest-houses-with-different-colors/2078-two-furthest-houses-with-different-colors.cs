public class Solution {
    public int MaxDistance(int[] colors) {
        int maxdis = 0 ;
        int n = colors.Length;

        for(int i=0 ; i<n ; i++){
            for(int j=i+1 ; j<n ; j++){
                if(colors[i] != colors[j]){
                    int x = Math.Abs(j-i);
                    maxdis = Math.Max(x,maxdis);
                }
            }
        }

        return maxdis;
    }
}