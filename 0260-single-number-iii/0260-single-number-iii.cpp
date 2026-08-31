class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        vector<int> result ;

        unordered_map<int , int> freq ;
        for(int i : nums){
            freq[i]++;
        }

        for(auto pair : freq){
            if(pair.second == 1){
                result.push_back(pair.first);
            }
        }

        return result ;
    }
};