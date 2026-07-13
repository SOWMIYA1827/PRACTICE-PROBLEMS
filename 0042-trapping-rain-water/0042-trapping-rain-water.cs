public class Solution {
    public int Trap(int[] height) {
        
        int n = height.Length ;
        int[] leftmax = new int[n];
        int[] rightmax = new int[n];

        leftmax[0] = height[0];
        for(int i=1 ; i<n ; i++){
            leftmax[i] = Math.Max(height[i],leftmax[i-1]);
        }

        rightmax[n-1] = height[n-1];
        for(int i=n-2 ; i>=0 ; i--){
            rightmax[i] = Math.Max(height[i],rightmax[i+1]);
        }

        int ans = 0 ;
        for(int i=0 ; i<n ; i++){
            ans += Math.Min(leftmax[i],rightmax[i]) - height[i];
        }

        return ans;
    }
}