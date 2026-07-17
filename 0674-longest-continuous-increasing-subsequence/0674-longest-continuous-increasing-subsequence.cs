public class Solution {
    public int FindLengthOfLCIS(int[] nums) {

        if(nums.Length == 0){
            return 0 ;
        }

        int maxlen = 1 ;
        int count = 1 ;
        for(int i=1 ; i<nums.Length ;i++){
            if(nums[i] > nums[i-1]){
                count++;
            }else{
                count = 1;
            }

            maxlen = Math.Max(count,maxlen);
        }

        return maxlen;
    }
}