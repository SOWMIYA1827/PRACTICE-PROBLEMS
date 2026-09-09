class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0 ;
        int least = INT_MAX ;

        for(int price : prices){
            if( price < least ){
                least = price ;
            }
            else{
                profit = max(profit , price - least);
            }
        }

        return profit ;
    }
};