public class Solution {
    public int MaximumDifference(int[] nums) {
        int maxvalue = -1 ;

        for(int i=0 ; i<nums.Length ; i++){
            int dif = 0 ;
            for(int j=i+1 ; j<nums.Length ; j++){
                if(nums[i] < nums[j]){
                 dif = Math.Abs(nums[i] - nums[j]);
                 maxvalue = Math.Max(maxvalue,dif);
            }
            }
        }

        return maxvalue;
    }
}