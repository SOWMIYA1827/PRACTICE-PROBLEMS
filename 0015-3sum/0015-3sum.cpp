class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      set<vector<int>> ans ;
    sort(nums.begin() , nums.end());
    
    for( int i=0 ; i<nums.size() ; i++){
          int l =i+1 , r = nums.size() - 1 ;
        
        while ( l<r ){
            int sum = nums[i] + nums[l] + nums[r];
            if ( sum == 0){
                ans.insert({nums[i] , nums[l] , nums[r]});
                l++ , r-- ;
            }
            else if ( sum < 0 ){
                l++ ;
            }
            else{
                r--;
            }
        }
        
    }
        return vector<vector<int>> (ans.begin() , ans.end());
    }
};