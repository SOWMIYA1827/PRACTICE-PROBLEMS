public class Solution {
    public string[] FindRestaurant(string[] list1, string[] list2) {
        Dictionary<string,int> ans = new  Dictionary<string,int>();
        for(int i=0 ; i<list1.Length ; i++){
            ans[list1[i]] = i;
        }
        
        int small = int.MaxValue;
        for(int j=0 ; j<list2.Length ; j++){
            if(ans.ContainsKey(list2[j])){
                small = Math.Min(small , j + ans[list2[j]]);
            }
        }

        List<string> result = new List<string>();
        for(int k=0 ; k<list2.Length ; k++){
            if(ans.ContainsKey(list2[k])){
                int sum = k + ans[list2[k]];

                if(sum == small){
                    result.Add(list2[k]);
                }
            }
        }

        return result.ToArray();
    }
}