public class Solution {
    public int ThirdMax(int[] nums) {
        HashSet<int> set = new HashSet<int>(nums);
        List<int> ans = set.ToList();

        ans.Sort();
        ans.Reverse();
        int n = ans.Count;

        if(n >= 3){
            return ans[2];
        }

      
        return ans[0];
    }
}