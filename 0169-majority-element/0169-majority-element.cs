public class Solution {
    public int MajorityElement(int[] nums) {
        int n = nums.Length;
        Dictionary<int,int> ans = new Dictionary<int,int>();
        foreach(int x in nums){
            if(!ans.ContainsKey(x)){
                ans[x] = 1;
            }else{
                ans[x]++;
            }
        }

        int result = 0 ;
        foreach(var item in ans){
            if(item.Value > n/2){
                result = item.Key;
            }
        }

        return result;
    }
}