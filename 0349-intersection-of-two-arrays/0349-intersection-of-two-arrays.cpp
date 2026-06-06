class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1 , s2;
        vector<int> num ;

        for(int x : nums1) s1.insert(x);
        for(int y : nums2) s2.insert(y) ;
        
        for(int x : s1){
            if(s2.count(x)){
                num.push_back(x);
            }
        }

        return num ;
    }
};