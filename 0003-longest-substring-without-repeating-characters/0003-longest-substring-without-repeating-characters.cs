public class Solution {
    public int LengthOfLongestSubstring(string s) {
        
        int max = 0 ;
        for(int i=0 ; i < s.Length ; i++){
            HashSet<char> ans = new HashSet<char>();

            
            for(int j=i ; j < s.Length ; j++){
                if(ans.Contains(s[j])) break;

                ans.Add(s[j]);

                if(ans.Count > max) max = ans.Count;
            }
        }

        return max ;
    }
}