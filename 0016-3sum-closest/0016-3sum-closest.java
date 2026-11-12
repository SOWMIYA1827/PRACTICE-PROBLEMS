class Solution {
    public int threeSumClosest(int[] nums, int target) {
        int n = nums.length ;


        Arrays.sort(nums);
        int closeval = nums[0] + nums[1] + nums[2];

        for(int i=0 ; i<n-2 ; i++){
            int l = i+1 ;
            int r = n-1 ;


            while(l<r){
                int sumvalue = nums[i] + nums[l] + nums[r];
                if(Math.abs(sumvalue-target) < Math.abs(closeval-target)){
                    closeval = sumvalue ;
                }             
                else if( sumvalue > target){
                    r-- ;
                }
                else if(sumvalue < target){
                    l++ ;
                }
                else{
                    return target ;
                }
            }
        }

        return closeval ;
    }
}