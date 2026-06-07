class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> ans;

        for(int x : nums) {
           ans[x]++;
        }
        vector<int> result ;

        for(int i=1;i<=nums.size() ; i++){
            if(ans[i] > 1) result.push_back(i);
        }

        return result ;

    }
};