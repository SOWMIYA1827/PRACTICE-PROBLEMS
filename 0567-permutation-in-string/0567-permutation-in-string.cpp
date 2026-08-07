class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        int m = s1.length() ;
        int n = s2.length() ;

        if( m>n ) return false;

        unordered_map<char,int> need;
        unordered_map<char,int> window;

        for(int i=0 ; i<m ; i++){
            need[ s1[i] ]++;
            window[ s2[i] ]++;
        }


        if( need == window){
            return true;
        }

        int left = 0 ;
        for(int right = m ; right < n ; right++){
             char c = s2[right];
           
           window[c]++;

           window[ s2[left]]--;

           if( window[s2[left]] == 0){
            window.erase(s2[left]);
           }

           left++;

            if( need == window){
            return true;
        }

        }

        return false;
    }
};