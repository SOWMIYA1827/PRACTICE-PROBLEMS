class Solution {
    public boolean containsDuplicate(int[] nums) {
        Set<Integer> storage = new HashSet<>();

        int n = nums.length;

        for(int i=0 ; i<n ; i++){
            if(storage.contains(nums[i])){
                return true;
            }
            else{
                storage.add(nums[i]);
            }
        }

        return false;
    }
}