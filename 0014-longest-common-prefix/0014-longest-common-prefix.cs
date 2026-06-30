public class Solution {
    public string LongestCommonPrefix(string[] strs) {
        if(strs.Length == 0) return "";

        int n = strs[0].Length ;
        string ans = "";

        for(int i=0 ; i<n ; i++){
            char c = strs[0][i];

            for(int j=1 ; j<strs.Length ; j++){
                if( i>= strs[j].Length || strs[j][i] != c){
                    return ans;
                }
            }
                ans += c ;
        }

        return ans;
    }
}