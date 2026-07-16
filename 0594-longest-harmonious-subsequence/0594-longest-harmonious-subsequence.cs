public class Solution {
    public int FindLHS(int[] nums) {
        Dictionary<int,int> ans = new Dictionary<int,int>();

        foreach(int i in nums){
            if(ans.ContainsKey(i)){
                ans[i]++;
            }else{
                ans[i] = 1 ;
            }
        }

        int maxlen = 0 ;

        foreach(var pair in ans){
            if(ans.ContainsKey(pair.Key+1)){
                maxlen = Math.Max(maxlen , pair.Value + ans[pair.Key + 1] );
            }
        }

        return maxlen;
        


    }
}