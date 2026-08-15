class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        
        int xorvalue = 0 ;
        bool found = false ;

        for(int i=0 ; i<nums.size() ; i++){
            xorvalue ^= nums[i];

            if( nums[i] != 0){
                found = true ;
            }
        }

        if( !found ){
            return 0 ;
        }
        if( xorvalue != 0){
            return nums.size();
        }

        return nums.size()-1;
    }
};