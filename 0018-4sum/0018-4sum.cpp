class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

      set<vector<int>> ans ;
    sort(nums.begin() , nums.end());
    int j=0 ;
    while ( j < nums.size()){ 
    for( int i=j+1 ; i<nums.size() ; i++){
          int l =i+1 , r = nums.size() - 1 ;

          if (j > 0 && nums[j] == nums[j-1]) continue;
          if (i > j+1 && nums[i] == nums[i-1]) continue;
        
        while ( l<r ){
            long long sum = (long long)nums[i] + nums[l] + nums[r] + nums[j];
            if ( sum == target){
                ans.insert({ nums[j] ,nums[i] , nums[l] , nums[r]});
                l++ , r-- ;
            }
            else if ( sum < target ){
                l++ ;
            }
            else{
                r--;
            }
        }
    }
     j++;
    }
        return vector<vector<int>> (ans.begin() , ans.end());
    }
};