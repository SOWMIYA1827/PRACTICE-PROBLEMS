public class Solution {
    public bool IsIsomorphic(string s, string t) {
        
        if(s.Length != t.Length){
            return false;
        }

        Dictionary<char,char> ST = new Dictionary<char,char>();
        Dictionary<char,char> TS = new Dictionary<char,char>();
        for(int i=0 ; i<s.Length ; i++){
            char c1 = s[i];
            char c2 = t[i];

            if(ST.ContainsKey(c1)){
                if(ST[c1] != c2){
                    return false;
                }
            }
            else{
                ST[c1] = c2;
            }
            
            if(TS.ContainsKey(c2)){
                if(TS[c2] != c1){
                    return false;
                }
            }
            else{
                TS[c2] = c1;
            }
        }

        return true;
    }
}