class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> result ;

        int numberofelements = 1 << n ;

        for(int i=0 ; i<numberofelements ; i++){
            int gray = i ^ (i>>1);
            result.push_back(gray);
        }

        return result ;
    }
};