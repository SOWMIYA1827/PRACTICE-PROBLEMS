class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int> freq ;
        vector<int> x ;

        for(int x : nums) freq[x]++;

        set<int> s(nums.begin() , nums.end());
        vector<int> result(s.begin(),s.end());

        for(int i=0 ; i<result.size() ; i++){
            if(freq[result[i]] > 1) x.push_back(result[i]);
        }

        return x ;
    }
};