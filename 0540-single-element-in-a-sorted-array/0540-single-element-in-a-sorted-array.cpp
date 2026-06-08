class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int> freq;

        for(int x : nums) freq[x]++;

        int result ;
        for(int x : nums) if(freq[x] == 1) result=x;

        return result ;
    }
};