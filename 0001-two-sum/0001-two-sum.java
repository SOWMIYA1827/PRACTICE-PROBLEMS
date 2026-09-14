class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer , Integer> freq = new HashMap<>();

        for(int i=0 ; i<nums.length ; i++){
            int rem = target - nums[i] ;

            if( freq.containsKey(rem)){
                return new int[] {freq.get(rem) , i};
            }

            freq.put( nums[i] , i);
        }

        return new int[]{} ;
    }
}