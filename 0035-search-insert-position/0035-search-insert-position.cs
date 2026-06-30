public class Solution {
    public int SearchInsert(int[] nums, int target) {
        int index = 0 , flag = 0;

        for(int i=0 ; i<nums.Length ; i++){
            if(nums[i] == target || nums[i] > target){
                index = i ;
                flag = 1 ;
                break;
            }
        }

        if(flag == 0) {
            index =  nums.Length ;
        }

        return index;
    }
}