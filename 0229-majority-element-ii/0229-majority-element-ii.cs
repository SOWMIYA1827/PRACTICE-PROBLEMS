public class Solution {
    public IList<int> MajorityElement(int[] nums) {
        
        Dictionary<int,int> ans = new Dictionary<int,int>();

        List<int> list = new List<int>();

        int n = nums.Length;

        for(int i=0 ; i<n ; i++){
            if(ans.ContainsKey(nums[i]))
                 ans[nums[i]]++;
            else
                 ans[nums[i]] = 1;
       }

       foreach(var i in ans){
        if(i.Value > n/3){
            list.Add(i.Key);
        }
       }
            return list;

    }
}