class Solution {
    public void moveZeroes(int[] nums) {
        int j=0 , n = nums.length ;
        int countzeros = 0 ;

        for(int i=0 ; i<n ; i++){
            if(nums[i] == 0){
                countzeros++;
            }
            else{
                nums[j++] = nums[i];
            }
        }
        while(j<n && countzeros > 0){
            nums[j++] = 0 ;
        }
    }
}