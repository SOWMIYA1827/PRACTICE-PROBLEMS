class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        int index = 0;
        for(int i=0 ; i<nums.size() ; i++){

            if( (i==0 || nums[i] >nums[i-1]) && ( i==nums.size()-1 || nums[i] > nums[i+1])){
                    index = i;
                    break;
            }
        }

        return index;
    }
};