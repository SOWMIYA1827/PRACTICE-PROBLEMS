public class Solution {
    public int[] NextGreaterElement(int[] nums1, int[] nums2) {
        int n = nums1.Length ;

        for(int i=0 ; i<n ; i++){
            int ans = -1 ;
            bool found = false ;

            for(int j=0 ; j<nums2.Length ; j++){
                if(nums1[i] == nums2[j]){
                    found = true;
                }
                else if(found && nums1[i] < nums2[j]){
                     ans = nums2[j];
                     break;
                }
            }

            nums1[i] = ans;
        }

        return nums1;
    }
}