class Solution {
    public double findMaxAverage(int[] nums, int k) {
        int n = nums.length ;
        double maxaverage = Double.NEGATIVE_INFINITY ;

        for(int i=0 ; i<=n-k ; i++){
            int sum = 0 ;
            for(int j=i ; j<i+k ; j++){
                sum += nums[j];
            }
           double average = (double) sum/k ;
           maxaverage = Math.max(maxaverage , average);
        }

        return maxaverage ;
    }
}