class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        unordered_map<int,int> freq ;
        int n = nums.size();

        for(int i=0 ; i<n ; i++){
            freq[nums[i]]++;
        }

        int ans = 0 ;
        for(int i=0 ; i<n ; i++){
            if( freq[nums[i]] > 1){
                ans = nums[i];
                break ;
            }
        }

        return ans ;
    }
};