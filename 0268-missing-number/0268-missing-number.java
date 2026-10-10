class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length ;

        int expectedanswer = n * (n+1) / 2;
        int actualanswer = 0 ;

        for(int num : nums){
            actualanswer += num ;
        }

        return expectedanswer - actualanswer ; 
    }
}