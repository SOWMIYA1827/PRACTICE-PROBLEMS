class Solution {
    public int[] getConcatenation(int[] nums) {
        int n = nums.length ;

        nums = java.util.Arrays.copyOf(nums , 2*n);
        for(int i=0 ; i<n ; i++){
            nums[i+n] = nums[i];
        }

        return nums ;
    }
}