class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        
        unordered_map<int,int> mp ;
        
        long long sum = 0 ; 
        long long ans = 0 ;
        
        for(int i=0 ; i<k ; i++){
            sum += nums[i];
            mp[nums[i]]++;
        }
        
        if(mp.size() == k){
            ans = sum ;
        }
        
        for(int i=k ; i<n ; i++){
            int j = i-k;
            
            sum = sum - nums[j];
            mp[nums[j]]--;
            
            if(mp[nums[j]] == 0){
                mp.erase(nums[j]);
            }
            
            sum += nums[i];
            mp[nums[i]]++;
            
            if(mp.size() == k){
                ans = max(ans,sum);
            }
        }
        
        return ans;

    }
};