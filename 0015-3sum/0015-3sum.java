class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        int n = nums.length ;

        Arrays.sort(nums);
        Set<List<Integer>> store = new HashSet<>();

        for(int i=0 ; i<n ; i++){
            int l = i+1 ; 
            int r = n-1 ;

            while(l<r){
                int sum = nums[i] + nums[l] + nums[r];

                if( sum == 0){
                    store.add(Arrays.asList(nums[i],nums[l],nums[r]));
                    l++ ;
                     r-- ;
                }
                else if( sum < 0){
                    l++;
                }
                else{
                    r--;
                }
            }
        }

        return new ArrayList<>(store);
    }
}