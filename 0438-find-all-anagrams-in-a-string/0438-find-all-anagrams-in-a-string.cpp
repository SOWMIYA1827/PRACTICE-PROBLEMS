class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans ;
        int n = s.length();
        int m = p.length();

        unordered_map<char,int> need ;
        unordered_map<char,int> window ;

        for( int i=0 ; i<m ; i++){
            need[ p[i] ]++;
            window[ s[i] ]++;
        }

        if( need == window){
            ans.push_back(0);
        }

        for(int i=m ; i<n ; i++){
            char c = s[i];

            window[c]++;

            window[s[i-m]]--;

            if( window[s[i-m]] == 0){
                window.erase(s[i-m]);
            }

            if( need == window){
            ans.push_back(i-m+1);
            }
        }

        return ans ;
    }
};