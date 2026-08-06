class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> ans ;

        for(int i : nums ){
            ans[i]++;
        }

        for(auto i : ans){
            if( i.second != 1){
                return i.first ;
            }
        }

        return 0 ;
    }
};
