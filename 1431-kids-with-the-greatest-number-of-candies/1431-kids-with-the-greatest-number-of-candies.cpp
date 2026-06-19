class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        vector<bool> ans;

        for(int i=0 ; i<candies.size() ; i++){

            int value = candies[i] + extraCandies ;

            int maxlen = *max_element(candies.begin() , candies.end());

            if( value >= maxlen ){
                ans.push_back(true);
            }else{
                  ans.push_back(false);
            }
        }

        return ans ;
    }
};