class Solution {
    public double findMaxAverage(int[] nums, int k) {
        int n = nums.length ;
        
        long sum = 0 ;
        for(int i=0 ; i<k ; i++){
            sum += nums[i];
        }

        long maxielem = sum ;
        for(int i=k ; i<n ; i++){
            sum += nums[i] - nums[i-k];
            maxielem = Math.max(maxielem,sum);
        }

        return (double)maxielem/k ;
    }
}