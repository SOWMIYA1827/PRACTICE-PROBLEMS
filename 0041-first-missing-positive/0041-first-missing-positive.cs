public class Solution {
    public int FirstMissingPositive(int[] nums) {
        Array.Sort(nums);
        int n = nums.Length ;
        
        int ans = 1 ;
        foreach(int x in nums){
            if(x == ans){
                ans++;
            }
        }
        
        return ans;
    }
}