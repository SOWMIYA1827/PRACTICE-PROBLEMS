class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int , int> freq ;

        for(int x : nums){
            freq[x]++;
        }

        int maxfreq = 0 ;
        for(auto const it : freq){
            if ( maxfreq < it.second ){
                maxfreq = it.second ;
            }
        }

        int count = 0 ;
        for(auto const it : freq){
            if(it.second == maxfreq){
                count++;
            }
        }

        return count * maxfreq ;
    }
};