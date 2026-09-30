class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int n = seq.length() ;

        int depth=0 ;
        vector<int> result(n);

        for(int i=0 ; i<n ; i++){
            if(seq[i] == '('){
                depth++;
                result[i] = depth%2 ;
            }
            if(seq[i] == ')'){
                result[i] = depth%2 ;
                depth--;
            }
        }

        return result ;
    }
};