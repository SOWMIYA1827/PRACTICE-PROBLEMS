public class Solution {
    public int[] SearchRange(int[] nums, int target) {
        
        int[] temp = {-1,-1};

        for(int i=0 ; i<nums.Length ; i++){
            if(nums[i] == target){
                if(temp[0] == -1){
                    temp[0] = i ;
                }

                temp[1] = i ;
            }
        }

        return temp;
    }
}