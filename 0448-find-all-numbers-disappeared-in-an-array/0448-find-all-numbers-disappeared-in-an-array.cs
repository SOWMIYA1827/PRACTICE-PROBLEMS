public class Solution {
    public IList<int> FindDisappearedNumbers(int[] nums) {
        
        HashSet<int> result = new HashSet<int>(nums);

        List<int> list = new List<int>();

        for(int i=1 ; i<=nums.Length ; i++){
            if(!result.Contains(i)){
                list.Add(i);
            }
        }

        return list;
    }
}