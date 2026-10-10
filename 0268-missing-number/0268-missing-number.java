class Solution {
    public int missingNumber(int[] nums) {
        Set<Integer> storage = new HashSet<>();

        int n = nums.length;
        for(int i=0 ; i<n ; i++){
            storage.add(nums[i]);
        }

        for(int i=0 ; i<n ; i++){
            if(!storage.contains(i)){
                return i;
            }
        }

        return n; 
    }
}