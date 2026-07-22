class Solution {
    public double findMaxAverage(int[] nums, int k) {
        int ans = 0 ;
        int n = nums.length;

        for(int i=0 ; i<k ; i++){
            ans += nums[i];
        }

        double maxavg = (double)ans/k;
        for(int i=k ; i<n ; i++){
            ans = ans - nums[i-k] + nums[i];
            maxavg = Math.max(maxavg ,(double)ans/k);
        }

        return maxavg ;

    }
}