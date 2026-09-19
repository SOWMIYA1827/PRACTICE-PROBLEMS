class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,int> freq ;

        for(int num : arr){
            freq[num] = 0 ;
        }

        int rank = 1 ;
        for(auto& it : freq){
            it.second = rank++;
        }

        vector<int> result ;
        for(int num : arr){
            result.push_back(freq[num]);
        }

        return result ;
    }
};