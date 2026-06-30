public class Solution {
    public int RemoveDuplicates(int[] nums) {
        HashSet<int> ans = new HashSet<int>(nums);
        int k=0;
        List<int> result = ans.ToList();

        for(int i=0 ; i<result.Count ; i++){
            nums[k++] = result[i];
        }

        return k;
    }
}