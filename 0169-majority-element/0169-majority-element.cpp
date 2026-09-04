class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans = 0 ;
        int n = nums.size();

        unordered_map<int,int> freq ;
        for(int i=0 ; i<nums.size() ; i++){
            freq[nums[i]]++;
        }

        for(int i=0 ; i<n ; i++){
            if( freq[nums[i]] > n/2){
                ans = nums[i];
                break;
            }
        }

        return ans ;
    }
};